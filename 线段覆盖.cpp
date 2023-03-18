#include<iostream>
#include<algorithm>
using namespace std;
struct line{
	int l, r;
 
}a[101];
bool operator<(const line& a,const line& b) {
	return a.r < b.r;
 
}
int main() {
	int n,tot=1;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i].l >> a[i].r;
		if (a[i].l>a[i].r) swap(a[i].l, a[i].r);
	}
	sort(a + 1, a + n + 1);
	int end = a[1].r;
	for (int i = 2; i <= n; i++) {
		if (a[i].l >= end) {
			tot++;
			end = a[i].r;
	}
	}
	cout << tot << endl;
	return 0;
}