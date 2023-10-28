#include <iostream>
using namespace std;

void solution(){
	int A, B, C;
	int v12, v13, v14, v15, v16, v17;
	int v9, v10 = 0;
	int v6 = 1;

	cin >> A >> B >> C;
	v9 = A + B;

	for(v12 = 1; v12 <= C; ++v12){
		v10 += A;
		v13 = v10;
		v14 = 0;
		v15 = 0;
		do{
			v16 = 2*v13;
			if (v16 <= B) break;
			v13 = v13 - B;
			// --v14;
			// v15 = v15 - B;
		}while(1);
		// v16 = (2*A)%(2*B);

		v17 = v6*v13;
		v17 = v17 - v12*v9;
		if (v17 < 0) v6 = v12;
	}
	cout << v6 << endl;
}


int main(){
	int T;
	cin >> T;
	for(int t = 0; t < T; ++t){
		solution();
	}
	return 0;
}