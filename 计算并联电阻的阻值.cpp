#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	double r1,r2,r;
	cin>>r1>>r2;
	r=1/(1/r1+1/r2);
	cout<<setprecision(2)<<fixed<<r;
	return 0;
}
