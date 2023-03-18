#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	double a,b;
	cin>>a;
	if (a<=20) b=a*1.68;
	else b=a*1.98;
	cout<<setprecision(2)<<fixed<<b;
return 0;
} 
