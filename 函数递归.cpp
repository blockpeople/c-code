#include<iostream>
using namespace std;
int a=10;
void f(int n){
	printf("%d\n",n);
	if(n==1)
		return;
	else
		f(n-1);
} 
int main(){
	f(10);
}
