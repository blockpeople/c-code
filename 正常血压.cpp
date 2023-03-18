#include<iostream>
using namespace std;
int main()
{
    int n,a[101][2];
    int max=0,sum=0;
    int i;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a[i][0]>>a[i][1];
        if(a[i][0]>=90&&a[i][0]<=140&&a[i][1]>=60&&a[i][1]<=90)
        {
            sum++;
            if(sum>max)
                max=sum;
        }
        else sum=0;
    }
    cout<<max<<endl;
    return 0;
}
