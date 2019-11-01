/*
Link for this problem
https://www.codechef.com/problems/TLG
*/

#include<bits\stdc++.h>
#define ll long long
#define SPEED ios_base::sync_with_stdio(false); cin.tie(NULL)
#define FORM_CUMULATIVE_DATA for(i = 1; i < n; i++) {a[i] += a[i-1];b[i] += b[i-1];}
using namespace std;

int main() {
	ll n;
	cin >> n;
	ll a[n], b[n], i, j, k, max = 0, x = 0, lead = 0;
	
	//Entering data
	for(i = 0, j = 0, k = 0; i < n * 2; i++){
		cin >> x;
		if(i % 2 == 0){
		 	a[j] = x;
		 	j++;
		}
		else {
	 		b[k] = x;
	 		k++;
	 	}
	}
	 
	// Forming cumulative data
	FORM_CUMULATIVE_DATA;
	
	// Finding the lead
	for(i = 0; i < n; i++) {
		if( max < llabs(a[i] - b[i]) ) {
			max = llabs(a[i] - b[i]);
			if (a[i] > b[i]) lead = 1;
			else lead = 2;
		}
	}
	
	cout << lead << " "<< max;
	
//	cout << endl;
//	for(i = 0; i < n; i++) cout << a[i] << " " << b[i] << endl;
	return 0;
}

