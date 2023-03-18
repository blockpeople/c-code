#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	double x,y,p;
	cin>>x>>y;
	p=(87*x+85*y)/(x+y);
	cout<<setprecision(4)<<fixed<<p;
	return 0;
}