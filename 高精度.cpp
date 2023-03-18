// 加法进位:c[i]=a[i]+b[i];
//         if (c[i]>=10){
//             c[i]%=10;
//             ++c[i+1];
//         }
// 减法借位:if(a[i]<b[i]){
//             --a[i+1];
//             a[i]+=10;
//         }
//         c[i]=a[i]-b[i];
// 乘法进位:c[i+j-1]=a[i]*b[j]+x+c[i+j-1];
//         x = c[i+j-1]/10;
//         c[i+j-1]%=10;


//高精度加法
#include<iostream>
#include<string.h>
#include<cstdio>
using namespace std;
char c1[205],c2[205];//接受输入的字符串
int a1[205],b1[205],c_1[205];//加数、被除数、和
int i,x;//x表示循环变量 X表示进位y
int main(){
    //高精度加分
    int lena,lenb,lenc;
    //1、输入两个字符串 strlen(字符数组)
    scanf("%s",c1);
    scanf("%s",c2);
    //2、获取两个字符串的长度
    lena=strlen(c1);
    lenb=strlen(c2);
    //3、将保存的字符数组转换成整数,并倒叙保存
    for(i=0;i<=lena-1;i++){
        //-'0'
        //倒叙
        a1[lena-i]=c1[i]-48;
    }
    for(i=0;i<=lena-1;i++){
        //-'0'
        //倒叙
        b1[lenb-i]=c2[i]-48;
    }
    //4、循环将数组的每一位求和
    lenc=1;
    x=0;
    //如果没有超出长度则可以继续循环
    while(lenc<=lena||lenc<=lenb){
        //求和
        c_1[lenc]=a1[lenc]+b1[lenc]+x;
        //是否进位
        x=c_1[lenc]/10;
        //求出进位后个位数的结果
        c_1[lenc]%=10;
        //将循环变量自增
        lenc++;
    }lenc++;
    //保存最高位
    c_1[lenc]=x;
    //判断最高位是否为0
    //如果最高位为0,则需要将最高位减一
    while(c_1[lenc]==0){
        lenc--;
    }for(i=lenc;i>=1;i--){//5、从后往前循环输出
        cout<<c_1[i];
    }
    return 0;
}




