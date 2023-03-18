#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, a[1001] = {}, b = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int i = 0;
    while (i < (n - 1)) {
        sort(a, a + n);
        a[i + 1] += a[i];
        b += a[i + 1];
        a[i] = 0;
        ++i;
    }
    cout << b;
    return 0;
}