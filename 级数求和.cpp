#include<iostream>
using namespace std;
int main(){
	double sn;
	int n=0,k;
	cin>>k;
	while(sn<=k){
		n++;
		sn+=1.0/n;
	}
	cout<<n;
return 0;
}
