#include<iostream>
#include<cmath>
using namespace std;
int main(){
	long long int n,a,b;
	cin>>n;
	while(n>0){
		a=n%10;
		n=floor(n/10);
		cout<<a<<" ";
	}
return 0;
}
