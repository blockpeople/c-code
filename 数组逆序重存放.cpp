#include<iostream>
using namespace std;
int main(){
	int n;
	int a[105];
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		cout<<a[n-i+1]<<" ";
	}
	return 0;
}
