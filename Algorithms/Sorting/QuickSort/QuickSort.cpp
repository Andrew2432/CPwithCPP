#include<bits\stdc++.h>
#define ll long long
#define INF INT_MAX
#define SPEED ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

void swap(ll *a, ll *b){
	ll t = *a;
	*a = *b;
	*b = t;
}

ll partition(ll a[], ll low, ll high){
	ll pivot = a[high];
	ll i = low - 1, j = high;
	
	for(j = low; j <= high - 1; j++) {
		if(a[j] < pivot) {
			i++;
			swap(&a[i], &a[j]);
		}
	}
	swap(&a[i+1], &a[high]);
	return (i+1);

}
	
void quicksort(ll a[], ll low, ll high) {
	ll j;
	if(low < high) {
		j = partition(a, low, high);
		quicksort(a, low, j-1);
		quicksort(a, j+1, high);
	}
}

int main() {
	SPEED;
	ll n, i;
	cin >> n;
	ll a[n];
	for(i = 0; i < n; i++) cin >> a[i];
	cout << endl;
	//	Before sorting
	for(i = 0; i < n; i++) cout << a[i];
	quicksort(a, 0, n - 1);
	cout << endl;
	//	After sorting
	for(i = 0; i < n; i++) cout << a[i];
	return 0;
}
