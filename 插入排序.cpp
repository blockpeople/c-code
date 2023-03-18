#include<iostream>
using namespace std;
int a[105],n,k;
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		int k=1;
		for(int j=k-1;j>=0;j--){
			if(a[k]<a[j]){
				int temp=a[k];
				a[k]=a[j];
				a[j]=temp;
				k=j;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<' ';
	}
	return 0;
}
