#include <bits/stdc++.h>
using namespace std;
struct work {
    int d, p;
}a[100005];
int n, m;
long long b[10005], c;
bool cmp(work i, work j) { return i.p > j.p; }
int main() {
    cin >> m >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].d;
        if (a[i].d > m)
            a[i].d = m;
    }
    for (int i = 1; i <= n; i++) cin >> a[i].p;
    sort(a + 1, a + n + 1, cmp);
    for (int i = 1; i <= n; i++) {
        for (int j = a[i].d; j >= 1; j--) {
            if (b[j] == 0) {
                b[j] = a[i].p;
                break;
            }
        }
    }
    c = 0;
    for (int i = 1; i <= m; i++) {
        if (b[i] == 0)
            c = 0;
        c += b[i];
    }
    cout << c;
    return 0;
}