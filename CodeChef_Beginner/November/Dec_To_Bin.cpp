#include<bits/stdc++.h>
#include<cmath>
#define SPEED ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
#define POW_OF_TWO for(i = 0; i < 12; i++) powers_of_2[i] = pow(2, i);
using namespace std;

ll minMenuCount(ll n) {
	
}

int main() {
	ll tc, n = 0, powers_of_2[13], i;
	POW_OF_TWO;
//	for(i = 0; i < 12; i++) cout << powers_of_2[i] << "\n";
	cin >> tc;
	
	while(tc--) {
		cin >> n;
		cout << minMenuOrder(n) << "\n";
	}
	
	return 0;
}
