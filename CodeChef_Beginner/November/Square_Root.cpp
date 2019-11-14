/*
Link for this problem:
https://www.codechef.com/problems/FSQRT
*/

#include<bits/stdc++.h>
#include<cmath>
#define ll long long
#define SPEED ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main() {
    SPEED;
    ll tc, n = 0;
    cin >> tc;
    
    while(tc--) {
        cin >> n;
        cout << floor(pow(n, 0.5)) << "\n";
    }
    
    return 0;
}
