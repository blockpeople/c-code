#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main(){
    string s1, s2;           // 输入的内容
    int a[100], b[100], c[100]; // 乘数和积
    int alen, blen, clen;       // 长度

    //格式化数组
    memset(a, 0, sizeof(a));
    memset(b, 0, sizeof(b));
    memset(c, 0, sizeof(c));

    //输入数据
	//gets(s1);
	//gets(s2);
    //scanf("%s",s1);
    //scanf("%s",s2);
    cin >> s1;
    cin >> s2;

    //1.length获取长度
    alen = s1.length();
    blen = s2.length();

    //2.将字符数组或者字符串的每一位转换成整数
    //12345
    //54321
    for (int i = 0; i <= alen - 1; i++)
    {
        //s1[i]-'0';
        a[alen - i] = s1[i] - 48;
    }
    for (int i = 0; i <= blen - 1; i++)
    {
        //s2[i]-'0';
        b[blen - i] = s2[i] - 48;
        //printf("%d",b[blen-i]);
    }

    //3.处理
    int x; // 保存每一次的进位数
    for (int i = 1; i <= alen; i++)
    {
        x = 0;
        for (int j = 1; j <= blen; j++)
        {
            //处理每一轮的结果
            //c[i+j-1]上一轮的结果
            //本次结果=当前结果+进位数+上一次结果
            c[i + j - 1] = a[i] * b[j] + x + c[i + j - 1];
            //获取本茨进位结果
            x = c[i + j - 1] / 10;
            //当前位剩余的值
            c[i + j - 1] %= 10;
        }
        //进位
        c[i + blen] = x;
    }
    //处理次数=两个数组的长度之和
    clen = alen + blen;
    //删除最前面的0
    while (c[clen] == 0)
    {
        clen--;
    }

    //循环输出
    for (int i = clen; i >= 1; i--)
    {
        cout << c[i];
    }
    return 0;
}