/*
Link for this problem
https://www.codechef.com/problems/FLOW004
*/

#include<bits\stdc++.h>
#define SPEED ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
using namespace std;

int main() {
	ll tc, n, fd, ld, rem;
	cin >> tc;
	
	while(tc--) {
		cin >> n;
		ld = n % 10;
		
		while(n > 0) {
			rem = n % 10;
			if(n < 10) fd = rem;
			n /= 10;
		}
		
		cout << fd+ld << "\n";
	}
	
	return 0;
}
