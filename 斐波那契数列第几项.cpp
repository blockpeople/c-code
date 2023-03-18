#include<iostream>
using namespace std;
int a=10;
int f(int n){
	if(n>2){
		return f(n-1)+f(n-2);
	}
	else{
		return 1;
	}
} 
int main(){
	int a;
	cin>>a;
	cout<<f(a);
}
