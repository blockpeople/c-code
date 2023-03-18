#include<iostream>
using namespace std;
int a[105],n,max_=-1234567,num=0;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]>max_){
			max_=a[i];
		}
	}`	
	for(int i=1;i<=n;i++){
		if(a[i]!=max_){
			num+=a[i];
		}
	}
	cout<<num;
	return 0;
}
