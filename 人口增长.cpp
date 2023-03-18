#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    double x,n;
    int i;
    cin>>x>>n;
    for(i=1; i<=n; i++)
        x=x*1.001;
    printf("%.4lf\n",x);
    return 0;
}
