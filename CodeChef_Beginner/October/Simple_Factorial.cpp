#include<bits\stdc++.h>
using namespace std;

double fact(double n) {
	return ((n == 0 || n == 1) ? 1 : (n * fact(n - 1)));
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	double n, a;
	cin >> n;
	while(n--) {
		cin >> a;
		printf("%.0f\n", fact(a));
	}
	return 0;
}
