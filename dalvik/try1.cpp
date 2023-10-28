#include <iostream>
using namespace std;

void solution(){
	int v0, v1, v2, v3 = 1;
	cin >> v0 >> v1 >> v2;
	cout << v0 << v1 << v2 << endl;

	int v4 = 0; //int v4 = v3 - v3;
	int v5 = -1;//int v5 = v4 - v3;
	int v6 = v3;
	int v7 = -v1; //v7 -= v1;

	int v8 = v0;
	int v9 = v0;
	v9 = v0 + v1;

	int v10 = v4;
	int v11 = v4;
	int v12 = v4;

	for (; v12 <= v2; ++v12){
			v11 += v1;
			v10 += v0;
			int v13 = v10;
			int v14 = v4;
			int v15 = v4;
		l1:
			int v16 = v13 + v13;
			if(v16 <= v1) goto l2;
			v13 -= v1;
			v14 -= v3;
			v15 -= v1;
			goto l1;
		l2:
			if(v13 > v4) goto l3;
			v13 = v4 - v13;
		l3:
			int v17 = v4;
			int v18 = v3;
		l4:
			v17 += v13;
			v18 += v3;
			if(v18 < v6) goto l4;
		l5:
			v17 -= v9;
			v18 -= v3;
			if(v18 <= v12) goto l5;
			if(v17 >= v4) continue; //goto l6;
			v5 = v14;
			v6 = v12;
			v7 = v15;
			v8 = v10;
			v9 = v13;
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