#include<iostream>
using namespace std;
int a,b;
int f(int n){
	if(n==1){
		return 1;
	}
	else{
		return f(n-1)+n;
	}
} 
int main(){
	cin>>a;
	cout<<f(a);
}
