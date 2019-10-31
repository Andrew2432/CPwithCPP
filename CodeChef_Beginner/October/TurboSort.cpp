/*
Link for this problem:
https://www.codechef.com/problems/TSORT
*/

#include<bits/stdc++.h>
#define SPEED ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
#define per(i , j , n) for(ll i = j ; i < n ; i++)
using namespace std;

int main() {
    SPEED;
    ll n;
    cin >> n;
    ll a[n];
    per(i, 0, n) cin >> a[i];
    sort(a, a+n);
    per(i, 0, n) cout << a[i] << "\n";
    return 0;
}
