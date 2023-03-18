#include<iostream>
using namespace std;
int a[105][105];
int main(){
	int m,n,num=0;
	cin>>m>>n;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(i==0||j==0||i==m-1||j==n-1){
				num+=a[i][j];
			}
		}
	}
	cout<<num;
	return 0;
}
