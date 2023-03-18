#include<iostream>
using namespace std;
int a[10005];
int main(){
	int l,m,st,sp,cnt=0;
	cin>>l>>m;
	for(int i=1;i<=l;i++){
		cin>>st>>sp;
		for(int j=st;j<=sp;j++){
			a[j]=0;
		}
	}
	for(int i=0;i<=l;i++){
		if(a[i]){
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
