#include<bits/stdc++.h>
using namespace std;

int n, a[10000], k = 0, b = 0;

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> k;
		a[k]++;
	}
	for (int i = 0; i < n + 1; i++) {
		if (a[i] > 0) {
			b++;
		}
	}
	cout << b;
	for (int i = 0; i < n + 1; i++) {
		while (a[i] > 0) {
			cout << i << " ";
			a[i]=0;
		}
	}
	return 0;
}