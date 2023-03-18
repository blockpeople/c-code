#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	double x,a,b,c,d,f;
	cin>>x>>a>>b>>c>>d;
	f=a*(x*x*x)+b*(x*x)+c*x+d;
	cout<<setprecision(7)<<fixed<<f;
return 0;
}
