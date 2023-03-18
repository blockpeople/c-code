#include<iostream> 
#include<iomanip>
using namespace std;
int main(){
	const double PI=3.14159;
	double c,r,s,d;
	cin>>r;
	d=r*2;
	s=2*PI*r;
	c=PI*r*r;
	cout<<setprecision(4)<<fixed<<d<<" "<<s<<" "<<c;
return 0;
}
