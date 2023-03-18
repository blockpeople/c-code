#include<bits/stdc++.h>
using namespace std;
int n = 0, t = 0, f = 0, a[10000] = {0};
int main(){
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (a[j] > a[j + 1]) {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
    f = 0;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] != a[i + 1]) {
            f++;
        }
    }
    printf("%d\n", f + 1);
    for (int i = 0; i < n; i++){
        if (a[i] != a[i + 1]) {
            printf("%d ", a[i]);
        }
    }
    return 0;
}