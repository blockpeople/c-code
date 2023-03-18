#include<iostream>
using namespace std;
int main(){
	long long int f1=1,f2=1,fn,k;
	cin>>k;
	if(k==1){
		cout<<"1";
		return 0;
	}
	for(int i=3;i<=k;i++){
		fn=f2+f1;
		f1=f2;
		f2=fn;
	}
	cout<<f2;
return 0;
}
