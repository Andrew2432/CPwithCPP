#include<bits/stdc++.h>
#define SPEED ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
using namespace std;

int main() {
	SPEED;
	ll tc, size = 0, i, j;
	cin >> tc;
	
	while(tc--) {
		cin >> size;
		ll triangle[size][size];
		
		for(i = 0; i < size; i++){
			for(j = 0; j <= i; j++)
				cin >> triangle[i][j];
		}
		
		for(i = size - 1; i >= 0; i--) {
			ll prev_row = i - 1;
			for(j = 0; j < i; j++) {
				triangle[prev_row][j] += max(triangle[i][j], triangle[i][j + 1]);
			}
		}
		
		cout << triangle[0][0] << "\n";
	}
	
	return 0;
}
