#include<iostream>
using namespace std;
int main(){
	int a[1010];
	int n,m=0,ans;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]>m){
			ans=i;
			m=a[i];
		}
	}
	cout<<ans;
	return 0;
}
