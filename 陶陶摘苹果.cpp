#include<iostream>
using namespace std;
int main(){
	int a,num;
	int b[15];
	for(int i=1; i<=10; i++){
		cin>>b[i];
	}
	cin>>a;
	for(int i=1; i<=10; i++){
		if(b[i]<=a+30){
			num++;
		}
	}
	cout<<num;
	return 0;
}
