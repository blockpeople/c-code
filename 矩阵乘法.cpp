#include<iostream>
using namespace std;
int main(){
	int n,m,k,z,sum=0;
	cin>>n>>m>>k;
	int a[105][105]={0},b[105][105]={0};
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<k;j++){
			cin>>b[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<k;j++){
			for(z=0;z<m;z++){
				sum+=b[z][j]*a[i][z];
			}
			cout<<sum<<" ";
			sum=0;
		}
		cout<<endl;
	}
}
