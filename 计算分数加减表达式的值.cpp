#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n;
    double sum=0;
    int i;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        if(i%2==0)	sum-=1.0/i;
        else sum+=1.0/i;
    }
    printf("%.4lf\n",sum);
    return 0;
}
