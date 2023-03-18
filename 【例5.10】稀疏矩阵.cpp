#include <bits/stdc++.h>
using namespace std;
int a[1005][1005],n,m;
int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int k=0;k<m;k++){
			cin>>a[i][k];
		}
	}
	for(int i=0;i<n;i++){
		for(int k=0;k<m;k++){
			if(a[i][k]!=0){
				cout<<i+1<<" "<<k+1<<" "<<a[i][k]<<endl;
			}
		}
	}
	return 0;
}
