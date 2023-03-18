#include<iostream>
using namespace std;
struct aaa {
	int x, y, z;
}a[1005];
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i].x >> a[i].y >> a[i].z;
	}for (int i = 0; i < n; i++) {
		if (a[i].y + a[i].z > 140 && a[i].y * 7 + a[i].z * 3 >= 800) {
			cout << "Excellent" << endl;
		}
		else {
			cout << "Not excellent" << endl;
		}
	}
	return 0;
}
