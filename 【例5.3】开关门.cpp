#include<iostream>
using namespace std;
int main(){
	int n,a;
	cin>>n;
	for(int i=1;i<=n;i++){
		a=i*i;
		if(a>n){
			break;
		}
		else{
			cout<<a<<" ";
		}
	}
	return 0;
}
