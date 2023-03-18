#include<iostream>
using namespace std;
int main(){
	int n,m,t;
	cin>>n>>m;
	int a[105][105]={0},b[105][105]={0};
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>b[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<b[i][j]+a[i][j]<<" ";
		}
		cout<<endl;
	}
}
