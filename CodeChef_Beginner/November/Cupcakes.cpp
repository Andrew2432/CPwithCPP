#include<bits\stdc++.h>
#define SPEED ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
using namespace std;

ll	maxCupcakes(ll n){
	ll i, j = 0, packages, cupcakes = n, packs[n];
	for(i = 1; i <= n; i++)	{
		if(i == 1) packages = 2;
		else	packages = i * i;
		if(packages <= n) {
			packs[j] = packages;
			j++;
		}
	}
	
	if(packs[j] == 0) return cupcakes;
	else return pow(packs[j-1], 0.5);
}

int main() {
	ll tc, n;
	cin >> tc;
	
	while(tc--) {
		cin >> n;
		cout << maxCupcakes(n);
	}
	
	return 0;
}
