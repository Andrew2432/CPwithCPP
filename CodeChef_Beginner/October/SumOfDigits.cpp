/*
Link for this problem:
https://www.codechef.com/problems/FLOW006
*/

#include<bits\stdc++.h>
#define ll long long
using namespace std;

ll sum(ll n) {
	ll s = 0, rem = 0;
	while(n > 0) {
		rem = n % 10;
		s += rem;
		n /= 10;
	}
	return s;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll tc, n, result;
	cin >> tc;
	
	while(tc--) {
		cin >> n;
		result = sum(n);
		cout << result << "\n";
	}
	return 0;
	
}
