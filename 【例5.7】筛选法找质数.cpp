#include<iostream>
using namespace std;
int main(){
	int n,a;
	cin>>n;
	for(int i=2;i<=n;i++){
		int b=1;
		for(int j=2;j<=i-1;j++){
			if(i%j==0){
				b=0;
			}
		}
		if(b==1){
			cout<<i<<endl;
		}
	}
	return 0;
}
