#include<bits/stdc++.h>
using namespace std;

int n, a[10000], k = 0;

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> k;
		a[k]++;
	}
	for (int i = 0; i < n + 1; i++) {
		while (a[i] > 0) {
			cout << i << " ";
			a[i]--;
		}
	}
	return 0;
}