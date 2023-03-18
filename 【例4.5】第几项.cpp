#include<iostream>
using namespace std;
int main(){
	long long int s=1,m,n,i=1;
	cin>>m;
	while(s<=m){
		s=s+i;
		n++;
		i++;
	}
	cout<<n;
return 0;
}
