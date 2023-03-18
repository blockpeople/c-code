#include<iostream>
using namespace std;
int n;
void fun(int a){
	for(int i=2;i<=a;i++){
		if(a%i==0){
			cout<<i;
			a=a/i;
			if(a!=1){
				cout<<"*";
				fun(a);
			}
			return ;
		}
	}
}
int main(){
	cin>>n;
	cout<<n<<"=";
	fun(n);
	return 0;
}
