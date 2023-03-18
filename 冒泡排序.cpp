#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, a[10005];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (a[j] > a[j + 1]) {
				swap(a[j], a[j + 1]);
			}
		}
	}
	for (int i; i < n; i++) {
		cout << a[i];
	}
	return 0;
}