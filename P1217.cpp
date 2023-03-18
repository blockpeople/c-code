#include<iostream>
using namespace std;
const int N = 10000000;
int a[N],b,c;
int zh(int a1){
	int b=2,c=0;
	while(b<a1){
		if(a1%b==0){
			c++;
			break;		
		}
		b++;	
	}
	if(c<1)
		return 1;
	else
		return 0;
}
int main(){
	int q=5;
	for(int i=0;i<=N/2;i++){
		int r;
		if(zh(q)==1) a[r]=q;
		q++;
		r++;
	}
	
	
}
