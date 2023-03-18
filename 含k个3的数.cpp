#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int m,k,a=0,b=0,c=0;
	cin>>m>>k;
	while(m>0){
		a=m%10;
		m=floor(m/10);
		if(a==3){
			b++;
		}
	}
	if(b==k){
		c++;
	}
	if((m%19)==0){
		c++;
	}
	if(c==2){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
return 0;
}
