#include<iostream>
using namespace std;
int a[5005];
int main(){
	int n,m,b=1;
	int isT=1;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		a[i]=1;
	}
	for(int i=2;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(j%i==0){
				if(a[j]==1){
					a[j]=0;
				}else{
					a[j]=1;
				}
			}
		}
	}
	for(int i=1;i<=n;i++){
		if(a[i]==1){
			if(isT){
				isT=0;
			}
			else{
				cout<<",";
			}
			cout<<i;
		}
	}
	return 0;
}
