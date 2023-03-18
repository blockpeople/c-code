#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	long double n,a,b;
	n=0;
	a=0;
	b=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a;
		b=a+b;
	}
	cout<<setprecision(4)<<fixed<<b/n;
return 0;
}
