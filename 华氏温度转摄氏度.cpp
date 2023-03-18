#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	double f,c;
	cin>>f;
	c=5*(f-32)/9;
	cout<<setprecision(5)<<fixed<<c;
	return 0; 
}
