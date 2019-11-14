/*
Link for this problem:
https://www.codechef.com/problems/LUCKFOUR
*/

#include<bits\stdc++.h>
#define SPEED ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
using namespace std;

ll countNoOfFour(ll n) {
	register ll rem = 0, count = 0;
	
	while(n > 0) {
		rem = n % 10;
		if(rem == 4) count++;
		n /= 10;
	}
	
	return count;
}

int main() {
	SPEED;
	register ll tc, n;
	cin >> tc;
	
	while(tc--) {
		cin >> n;
		cout << countNoOfFour(n) << "\n";
	}
	
	return 0;
}
