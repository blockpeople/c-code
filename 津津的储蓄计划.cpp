#include <iostream>
using namespace std;
int main()
{
    int plan,month,overplus=0,flag=1,total=0;
    int i,m;
    for(i=0; i<12; i++)
    {
        cin>>plan;
        overplus=overplus+300-plan;
        if(overplus<0&&flag)
        {
            month=i+1;
            flag=0;
        }
        m=overplus/100;
        overplus=overplus-m*100;
        total=total+m*100;
    }

    if(flag==0)	cout<<-1*month<<endl;
    else   cout<<overplus+(total*6)/5<<endl;
    return 0;
}
