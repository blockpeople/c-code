#include<iostream>
using namespace std;
int main(){
	int n;
	int sum=0;
	cin>>n;
	if(n<0){
		cout<<"-";
		n=-n;
	}
	while(n){
		sum=sum*10+n%10;
		n/=10;
	}
cout<<sum<<endl;
return 0;
}
