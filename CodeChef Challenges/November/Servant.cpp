#include<bits/stdc++.h>
#define SPEED ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main() {
    SPEED;
    int tc, n = 0;
    string str = "What a obedient servant you are!";
    cin >> tc;
    
    while(tc--) {
        cin >> n;
        n < 10 ? cout << str : cout << "-1";
    }
    
    return 0;
}
