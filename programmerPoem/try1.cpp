#include <iostream>
#include <string>
using namespace std;

void tolower(string &input){
	for(int i = 0; i < input.size(); ++i){
		if(input[i] >= 'A' and input[i] <= 'Z'){
			input[i] = input[i] - 'A' + 'a';
		}
	}
}

int main(){
	string str = "tSRATRAt{";
	tolower(str);
	cout << str;
}