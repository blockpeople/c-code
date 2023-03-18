#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if (a>b&a>c){
		cout<<a;
		if (c>b){
			cout<<" "<<c;
			cout<<" "<<b;
		}
		else{
			cout<<" "<<b;
			cout<<" "<<c; 
		}			
	}
	else if (b>a&b>c){
		cout<<b;
		if (a>c){
			cout<<" "<<a;
			cout<<" "<<c;
		}
		else{
			cout<<" "<<c;
			cout<<" "<<a;
		}
	}
	else if (c>a&c>b){
		cout<<c;
		if (a>b){
			cout<<" "<<a;
			cout<<" "<<b;
		}
		else{
			cout<<" "<<b;
			cout<<" "<<a;
		}
	}
return 0;
}
