#include<iostream>
using namespace std;
int a,b;
int f(int a){
	if(a == 1){
		return 1 ;
	}
	if(a % 2 == 0){
		printf("%d/2=%d\n" , a , a / 2) ;
//		cout << a << "/2=" << a / 2 << endl ;
		a = a / 2 ;
		return f(a) ;
	}else{
		printf("%d*3+1=%d\n" , a , a * 3 + 1) ;
//		cout << a << "*3+1=" << a * 3 + 1 << endl ;
		a = a * 3 + 1 ;
		return f(a) ;
	}
}
int main(){
	scanf("%d",&b) ;
	if(f(b) == 1){
		printf("End\n");
//		cout << "End" ;
	}
	return 0 ;
}
