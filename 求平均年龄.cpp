#include<iostream>
#include<iomanip> 
using namespace std;
int main(){
	double a,b;
	a=0;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>b;
		a=a+b;
	}
	cout<<setprecision(2)<<fixed<<a/n;
return 0;
	}
