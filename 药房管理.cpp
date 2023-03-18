#include<iostream>
using namespace std;
int main()
{
    int m,n,a[101];
    int sum=0;
    int i;
    cin>>m>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
        if(m>=a[i])	m-=a[i];
        else	sum++;
    }
    cout<<sum<<endl;
    return 0;
}
