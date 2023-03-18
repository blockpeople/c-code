#include<iostream>
using namespace std;
int main(){	
	int a[1005];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int b=a[0];
	for(int i=1;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<b;
	return 0;
}
