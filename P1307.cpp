#include<iostream>
using namespace std;
int main(){
    long long int n,a=1,b=0; 
    cin>>n;
    if(n<0){
        printf("%c","-");
        n=n*-1;
    }
    while(n>0){
        a=n%10;
        n=n/10;
        b=b*10+a;
    }
	printf("%d",b);
	return 0; 
}
    
    
