#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	long long n,m;
	scanf("%lld %lld",&n,&m);
	if (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
		printf("31\n");
		return 0;
	}
	if (m==4 || m==6 || m==9 || m==11){
		printf("30\n");
		return 0;
	}
	if ((n%400==0 || (n%4==0 && n%100!=0)) && m==2){
		printf("29\n");
		return 0;
	}else 
	printf("28\n");
	return 0;
}