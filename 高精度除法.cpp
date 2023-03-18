#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main(){
    string s1, s2; // 输入
    int a[100], b[100],c[100];
    int alen, blen, clen;

    memset(a, 0, sizeof(a));
    memset(b, 0, sizeof(b));
    memset(c, 0, sizeof(c));

    cin >> s1;
    cin >> s2;

    alen = s1.length();
    blen = s2.length();

    for (int i = 0; i <= alen - 1; i++){
        a[alen - i] = s1[i] - 48;
    }
    for (int i = 0; i <= blen - 1; i++){
        b[blen - i] = s2[i] - 48;
    }

    int x;
    for (int i = 1; i <=alen; i++){
        x=
        c[i - 1] = a[i] / b;
        
    }



    return 0;
}