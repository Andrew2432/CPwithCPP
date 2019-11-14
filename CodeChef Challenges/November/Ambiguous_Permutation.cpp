#include<bits/stdc++.h>
#define vi vector<int>
#define ll long long
#define SPEED ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main() {
	SPEED;
	ll n = 0, i, pos = 0, x;
	bool flag = false;
	vi v;
	vi::iterator itr;
	cin >> n;
	
	while(n != 0) {
		
		for(i = 0; i < n; i++) {
			cin >> x;
			v.push_back(x);
		}
		
		i = 0;
		if(v.size() == 1) {
			flag = false;
		}
		else {
			while(i < n && !flag) {
				itr = find(v.begin(), v.end(), i + 1);
				if(itr != v.end()) {
					pos = distance(v.begin(), itr) + 1;
	//			if(pos == v[i]) {
	//				cout << pos << "\n";
	//				i++;
	//			}
	//			else flag = true;
					(pos == v[i]) ? i++ : flag = true;
				}
			}
		}
		(flag == true) ? cout << "not ambiguous\n" : cout << "ambiguous\n";
		cin >> n;
		v.clear();
	}
	
	return 0;
}
