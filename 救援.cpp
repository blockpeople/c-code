#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double n,people,x,y;
    double l,time=0;
    int i;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>x>>y;
        cin>>people;
        l=sqrt(1.0*x*x+1.0*y*y);
        time+=2*l/50+people*1.5;
    }
    cout<<ceil(time)<<endl;
    return 0;
}
