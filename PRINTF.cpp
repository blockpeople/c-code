#include<iostream>
using namespace std;
int main(){
    int n,a,b;
    cin>>n;
    if(n<0){
        printf("%c","-");
        n=n*-1;
    //printf("%.2f(保留2位小数)",n(变量))
    //%d int
    //%c char
    //%f float
    //%s str
    //%lf double
    }
    while(a>0){
        a=n%10;
        n=n/10;
        printf("%d",a);
    }
}
    
    