#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n;
    double a=1,b=1,c,sum=0;
    int i;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        c=a+b;
        a=b;
        b=c;
        sum+=1.0*b/a;
    }
    printf("%.4lf\n",sum);
    return 0;
}
