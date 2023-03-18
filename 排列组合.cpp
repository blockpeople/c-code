#include<iostream> 
using namespace std;
int jc(int a){
	int b=1;
	for(int i=1;i<=a;i++){
		b=b*i;
	}
	return b;
}
int C(int m,int n){
	return jc(m)/(jc(m-n)*jc(n));
}
int main(){
	int n,m;
	cin>>n>>m;
	cout<<C(n,m);
	return 0;
}
