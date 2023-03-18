#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
char c1[25];
char a[25][25];
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=n;i>=1;i--){
		for(int j=0;j<i;j++){
			if(strcmp(a[j],a[j+1])>0){
				strcpy(c1,a[j]);
				strcpy(a[j],a[j+1]);
				strcpy(a[j+1],c1);
			}
		}
	}
	for(int i=1;i<=n;i++){
		cout<<a[i]<<endl;
	}
	return 0;
}
