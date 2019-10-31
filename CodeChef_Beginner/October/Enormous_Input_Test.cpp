/*
Link for this problem:
https://www.codechef.com/problems/INTEST
*/
#include<bits\stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, count = 0;
	long double data, divisor, result;
	cin >> n >> divisor;
	
	for(int i = 0; i++ < n;) {
		cin >> data;
		if(result = fmod(data, divisor) == 0) count++;
		data = 0;
	}
	cout << count;
	return 0;
}
