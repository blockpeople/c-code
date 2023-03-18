#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	double n;
	cin>>n;
	if (n>0)
		cout<<"positive";
	else if (n<0)
		cout<<"negative";
	else if (n==0)
		cout<<"zero";
return 0;
}
