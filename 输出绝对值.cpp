#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	double a;
	cin>>a;
	if (a<0)
		cout<<setprecision(2)<<fixed<<0-a;
	else
		cout<<setprecision(2)<<fixed<<a;
	return 0;
}
