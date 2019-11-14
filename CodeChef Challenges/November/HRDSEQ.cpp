#include<bits/stdc++.h>
#define SPEED ios_base::sync_with_stdio(false); cin.tie(NULL)
#define INIT for(i = 1; i <= 129; i++) sequence[i] = -1;
using namespace std;

int find(int sequence[], int val, int cur_pos) {
	for(int i = cur_pos - 1; i >= 1; i--) {
		if(sequence[i] == val) return i;
	}
	return -1;
}

int count(int sequence[], int val, int n) {
	int c = 0;
	for(int i = n; i >= 1; i--) {
		if(sequence[i] == val) c++;
	}
	
	return c + 1;
}
int main() {
    SPEED;
    register int tc, n = 0, i, sequence[129];
    INIT;

	sequence[0] = 0;
	sequence[1] = 0;
//    for(i = 1; i <= 128; i++) cout << sequence[i] << " " << i << endl;	
	for(i = 2; i <= 128; i++) {
		int res = find(sequence, sequence[i-1], i-1);
		if(res == -1) sequence[i] = 0;
		else if(res > -1) {
			int dif =  i - res;
			sequence[i] = dif - 1;
		}
	}
	
//	    for(i = 1; i <= 128; i++) cout << sequence[i] << " " << i << endl;	
	cin >> tc;
    
    while(tc--) {
        cin >> n;
        cout << count(sequence, sequence[n + 1], n + 1)<< "\n";
    }
    
    return 0;
}
