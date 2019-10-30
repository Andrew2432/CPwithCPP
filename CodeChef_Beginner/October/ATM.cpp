/*
	Link for this problem
	https://www.codechef.com/problems/HS08TEST
*/
#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long int amount = 0;
 	double avail_bal, new_bal;
 	cin >> amount >> avail_bal;
 	((amount % 5 == 0) && (avail_bal - amount >= 0.5)) ? (new_bal = avail_bal - amount - 0.5) : (new_bal = avail_bal);
 	/*
	 if(amount % 5 == 0) {
 		if(avail_bal - amount >= 0.5) 
 			new_bal = avail_bal - amount - 0.5;
	 }
	 else new_bal = avail_bal;
	*/
	printf("%.2f", new_bal);
	return 0;
}
