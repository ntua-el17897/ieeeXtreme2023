#include <iostream>
#include <stack>
using namespace std;

int next(int a, int h, int c, int q){
	return (a*h+c)%q;
}

int main(){
	int n, h, q, a, c;
	int sum = 0; 
	stack<int> sol; 

	cin >> n >> h >> a >> c >> q;
	sol.push(h);
	for(int i = 1; i < n; ++i){
		h = next(a, h, c, q)
		sum += sol.size();
		while(!sol.empty()){
			// cout << sol.top() << ' ';
			if(sol.top() > h){
				break;
			}
			else{
				sol.pop();
			}
		}
		// cout << endl;
		sol.push(h);
	}

	cout << sum << endl;

}