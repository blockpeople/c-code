#include<iostream>
using namespace std;
int main()
{
    int n,m;
    int a,b,c,d,sum=0;
    int i;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>m;
        a=m/1000;
        b=m/100%10;
        c=m/10%10;
        d=m%10;
        if(d-a-b-c>0)	sum++;
    }
    cout<<sum<<endl;
    return 0;
}
