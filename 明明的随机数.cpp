#include<cstdio>
#include<iostream>
using namespace std;
int n,a[101];
void sort(int x[]){
	for(int i=n;i>1;i--){
		for(int j=1;j<i;j++){
			if(x[j]>x[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a);
	int s=n,j;
	for(int i=1;i<n;i++){
		if(a[i]==a[i+1]) s--;
	}
	cout<<s<<endl;
	for(j=1;j<n;j++){
		if(a[j]==a[j+1]) 
			continue;
		cout<<a[j]<<" ";
	}
	if(a[j]!=a[j-1]) 
		cout<<a[j];
	return 0;
}
