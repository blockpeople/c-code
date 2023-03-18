#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main() {
	int a[105], n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int k, j;
	for (int i = 0; i < n; i++) {
		k = i;
		for (j = i + 1; j < n; j++) {
			if (a[k] > a[j]) {
				k = j;
			}
		}
		int temp = a[i];
		a[i] = a[k];
		a[k] = temp;
	}
	for (int i = 0; i < n; i++) {
		cout << a[i] << ' ';
	}
	return 0;
}