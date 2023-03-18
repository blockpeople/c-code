#include<iostream>
#include<cmath> 
using namespace std;
bool is_prime(int n){
	for(int i=2;i<=sqrt(n);++i){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
int a(int n){
	return n%10*10+n/10;
}
int main(){
	for(int i=10;i<=99;++i){
		if(is_prime(i)&&is_prime(a(i))){
			cout<<i<<endl;
		}
	}
	return 0; 
}

