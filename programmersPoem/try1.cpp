#include <iostream>
#include <string>
#include <map>
#include <set>
#include <vector>
using namespace std;

void tolower(string &input){
	for(int i = 0; i < input.size(); ++i){
		if(input[i] >= 'A' and input[i] <= 'Z'){
			input[i] = input[i] - 'A' + 'a';
		}
	}
}



int main() {
    int N,M;
    cin >> N >> M;
    getchar();
    map<int, set<string>> m;
    map<string, int> m2;
    vector<string> poemEnds;
    char *a;
    string line;
    string ans;
    a = new char [25];
    for(int i = 0; i < 25; ++i){
    	a[i] = 'X';
    }
    char c = 'A';
    string curr;
    char dump;
    for(int i = 0; i < N; ++i){
    	while(1){
    		cin >> curr;
	    	dump = getchar();
	    	m[i].insert(curr);
	    	m2[curr]=i+1;
	    	if(dump == '\n') break;
    	}
    }
    // for(int i = 0; i < N; ++i){
    // 	for(auto &x: m[i])
    // 		cout << x << endl;
    // }
    // for(auto &x: m2){
    // 	cout << x.first << " " << x.second << endl;
    // }
    getchar();
    for(int i = 0; i < M; ++i){
    	while(1){
    		cin >> curr;

	    	dump = getchar();
	    	if(dump == '\n' || dump == EOF) break;
    	}
    	tolower(curr);
    	poemEnds.push_back(curr);
    	   	
    }
    // for(auto &x: poemEnds)
    // 	cout << x << endl;
    // for(int i = 1; i < M; ++i){
    // 	if(i%2){
    // 		if (m2[poemEnds[i-1]] == 0){
    // 			ans.push_back('X');
    // 			ans.push_back('X');

    // 		}
    // 		else if(m2[poemEnds[i-1]] == m2[poemEnds[i]]){
    // 			if(a[m2[poemEnds[i-1]]] != 'X'){
    // 				ans.push_back(a[m2[poemEnds[i-1]]]);
    // 				ans.push_back(a[m2[poemEnds[i-1]]]);
    // 			}
    // 			else{
    // 				a[m2[poemEnds[i-1]]] = c;
    // 				ans.push_back(c);
    // 				ans.push_back(c);
    // 				++c;
    // 				if(c == 'X') ++c;
    // 			}
    // 		}
    // 		else{
    // 			// cout << "test\n";
    // 			// ans.push_back('t');
    // 			ans.push_back('X');
    // 			ans.push_back('X');
    // 		}
    // 	}
    // }
    if(m2[poemEnds[0]] == 0){
    	ans.push_back('X');
    }
    else if(m2[poemEnds[0]] == m2[poemEnds[1]]){
		a[m2[poemEnds[0]]] = c;
		ans.push_back(c);
		++c;
    }

    for(int i = 1; i < M - 1; ++i){
		if (m2[poemEnds[i]] == 0){
			ans.push_back('X');
		}
		else if(m2[poemEnds[i-1]] == m2[poemEnds[i]] || m2[poemEnds[i]] == m2[poemEnds[i+1]]){
			if(a[m2[poemEnds[i]]] != 'X'){
				ans.push_back(a[m2[poemEnds[i]]]);
			} 
			else{
				a[m2[poemEnds[i]]] = c;
				ans.push_back(c);
				++c;
				cout << i << " " << c << endl;
				if(c == 'X') ++c;
			}
		}
		else{
			// cout << "test\n";
			// ans.push_back('t');
			ans.push_back('X');
			// ans.push_back('X');
		}
    }
    if(m2[poemEnds[M - 1]] == 0){
    	ans.push_back('X');
    }
    else if(m2[poemEnds[M - 1]] == m2[poemEnds[M - 2]]){
		c = a[m2[poemEnds[M - 1]]];
		ans.push_back(c);
    }

    cout << ans << endl;
    return 0;
}