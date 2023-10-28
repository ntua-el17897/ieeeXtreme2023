// C++ program to check if a number is a Happy number or
// not.
#include <bits/stdc++.h>
using namespace std;

// Method - returns true if the input is a happy number else
// returns false
bool isHappynumber(int n)
{
	if (n == 1 || n == 7)
		return true;
	int sum = n, x = n;
	// This loop executes till the sum of square of digits
	// obtained is not a single digit number
	while (sum > 9) {
		sum = 0;
		// This loop finds the sum of square of digits
		while (x > 0) {
			int d = x % 10;
			sum += d * d;
			x /= 10;
		}
		if (sum == 1)
			return true;
		x = sum;
	}
	if (sum == 7)
		return true;
	return false;
}

int main()
{
	int n = 1215;
	for (int i = 0; i < n; ++i){
		if (isHappynumber(i)){
			cout << i << ", ";
		}
	}
	return 0;
}