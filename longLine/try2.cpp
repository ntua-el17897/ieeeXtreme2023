#include <iostream>
#include <stack>
using namespace std;


int main(){
	int n, a, h, c, q;
	stack<int> stack;
	long long unsigned int sum = 0;

	cin >> n >> h >> a >> c >> q;

	stack.push(h);
	for(int i = 1; i < n; ++i){
		h = (a*h+c)%q;
		sum += stack.size();
		while(!stack.empty()){
			if(stack.top() <= h){
				stack.pop();
			}
			else{
				break;
			}
		}
		stack.push(h);
	}

	cout << sum << endl;
	return 0;
}