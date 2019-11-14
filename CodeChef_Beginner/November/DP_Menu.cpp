#include<bits\stdc++.h>
#define ll long long
#define SPEED ios_base::sync_with_stdio(false); cin.tie(NULL)
#define MENU for(i = 0; i < 12; i++) menu[i] = pow(2,i)
using namespace std;

ll findBits(ll n) {
	ll count = 0;
	
	while(n > 0) {
		if(n % 2 == 1) count++;
		n /= 2;
	}
	
	return count;
}

ll DPSum(ll n,ll length, ll menu[]) {
	ll table[n + 1], i, j;
	table[0] = 0;
	
	for(i = 1; i <= n; i++) table[i] = INT_MAX;
	
	for(i = 1; i <= n; i++) {
		for(j = 0; j < length; j++) {
			ll sub_res = table[i-menu[j]];
			if(sub_res != INT_MAX && sub_res + 1 < table[i])
				table[i] = sub_res + 1;
		}
	}
	
	return table[n];
}

int main() {
	SPEED;
	ll tc, i, n = 0, menu[12];
	MENU;
	cin >> tc;
	
	while(tc--) {
		cin >> n;
		if(n <= 2048) cout << findBits(n) << "\n";
		else cout << DPSum(n, 12, menu) << "\n";
	}
	
	return 0;
}
