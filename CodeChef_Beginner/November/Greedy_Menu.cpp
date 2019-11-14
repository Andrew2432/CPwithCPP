#include<bits\stdc++.h>
#define ll long long
#define SPEED ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

ll findBits(ll n) {
	ll count = 0;
	
	while(n > 0) {
		if(n % 2 == 1) count++;
		n /= 2;
	}
	
	return count;
}

ll DPSum(ll n) {
	ll count = 0;
	
	for(ll i = 11; i >= 0; i--) {
		if((n - pow(2,i)) >= 0){
			n -= pow(2,i);
			count++;
		}
		else continue;
	}
}

int main() {
	ll tc, n = 0;
	cin >> tc;
	
	while(tc--) {
		cin >> n;
		if(n <= 2048) cout << findBits(n) << "\n";
		else cout << greedySum(n) << "\n";
	}
	
	return 0;
}
