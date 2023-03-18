#include<iostream>
using namespace std;
char a;
int main(){
	cin>>a;
	if(a>96){
		cout<<char(int(a)-32);
	}else{
		cout<<char(int(a)+32);
	}
}
