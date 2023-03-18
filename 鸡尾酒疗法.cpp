#include<iostream>
using namespace std;
int main()
{
    int n,a[30][2];
    double x,y;
    int i;
    cin>>n;
    for(i=0; i<n; i++)
        cin>>a[i][0]>>a[i][1];
    x=1.0*a[0][1]/a[0][0];
    for(i=1; i<n; i++)
    {
        y=1.0*a[i][1]/a[i][0];
        if(y-x>0.05)	cout<<"better"<<endl;
        else if(x-y>0.05)	cout<<"worse"<<endl;
        else	cout<<"same"<<endl;
    }
    return 0;
}
