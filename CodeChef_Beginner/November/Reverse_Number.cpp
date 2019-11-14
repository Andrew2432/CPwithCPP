/*
Link for the problem:
https://www.codechef.com/problems/FLOW007
*/

#include<bits\stdc++.h>
#define SPEED ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
using namespace std;

int main() {
	SPEED;
	register ll tc, n = 0, revnum = 0, rem = 0;
	cin >> tc;
	
	while(tc--) {
		cin >> n;
		
		while(n > 0) {
			rem = n % 10;
			revnum = revnum * 10 + rem;
			n /= 10;
		}
		
		cout << revnum << "\n";
		revnum = 0;
	}
	
	return 0;
}
