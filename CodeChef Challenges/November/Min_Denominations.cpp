#include<bits/stdc++.h>
#define ll long long
#define SPEED ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

ll minDenominations(ll n) {
	ll denom[6] = {1, 2, 5, 10, 50, 100};
	ll count = 0, i = 5;
	
	while(n > 0) {
		if(n >= denom[i]) {
			count++;
			n -= denom[i];
		}
		else i--;
	}
	
	return count;
}
int main() {
	ll tc, n = 0;
	cin >> tc;
	
	while(tc--){
		cin >> n;
		cout << minDenominations(n) << "\n";
	}
	
	return 0;
}
