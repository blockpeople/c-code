#include<iostream>
using namespace std;
int main(){
	int n,sum=0,sum2=0;
	cin>>n;
	for(int i=0;i<=n;i++){
		if(i%2==0){	
			sum+=i;
		}
		else{
			sum2+=i;
		}
	}
	cout<<sum<<" "<<sum2;
	return 0;
}
