#include <iostream>
#include <string>

using namespace std;

void cipher(string input, int offset){

}

void decipher(string input, int offset){

}

void solution(){
	int offset;
	string input;
	cin >> offset;
	getline(cin, input);
	cout << input;
	cout << input.find(" the ") << endl;
	if(input.find(" the ") == string::npos) cout << "yeah\n";
	// if (check) cipher(input, offset);
	// else decipher(input, offset);
}

int main(){
	ios::sync_with_stdio(false);

	int n;
	cin >> n;
	for(int i = 0; i < n; ++i){
		solution();
	}

	return 0;
}