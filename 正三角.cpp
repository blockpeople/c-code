#include<iostream>
using namespace std;
int main(){
	int b;
	for(int i=1;i<=4;i++){
		for(int c=1;c<=4-i;c++)
			cout<<" ";
		for(int a=1;a<=i;a++)
			cout<<" "<<"*";
	cout<<endl;
	}
return 0;
}
