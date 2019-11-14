#include<bits/stdc++.h>
#define SPEED ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
using namespace std;

void palindrome(ll n) {
    ll rev = 0, digit = 0, original = n;
    
    while(n > 0) {
        digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }
    
    if(rev == original) cout << "wins\n";
    else cout << "losses\n";
}

int main() {
    SPEED;
    ll tc, n = 0;
    cin >> tc;
    
    while(tc--) {
        cin >> n;
        palindrome(n);
    }
    
    return 0;
}
