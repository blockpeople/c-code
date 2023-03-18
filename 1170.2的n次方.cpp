#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int a[10000];
    int n = 0;
    int l = 1;
    int x = 0; // 进位
    a[1] = 2;  // 记录位数
    cin >> n;
    // 2*10=2*2*2*2*2*2*2*2*2*2
    // 1024
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= l;j++)
        {
            a[j] = a[j] * 2;
        }
            // 循环获取第一次的结果
            for (int j = 1; j <= l; j++)
            {
                x = 0;
                // 判断是否进位       // [b]=[a+1]
                if (a[j] > 9) // a[2]=a[1+1]
                {
                    // 下一位进位后的结果=下一位的结果+进位数
                    a[j + 1] = a[j + 1] + a[j] / 10;
                    // 13 保留当前位
                    // 13进1
                    // 23进2
                    a[j] %= 10;
                    // 进位结果
                    // x=a[j]/10;
                    x = max(x, j + 1);
                }
            }
        // 0111==111
        // 避免最前面位为0
        l = max(l, x);
    }
    for (int i=l; i >= 1; i--)
    {
        cout << a[i];
    }
    return 0;
}