 #include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"input a,b:";
	cin>>a>>b;
	c=a;
	a=b;
	b=c;
	cout<<a<<b<<endl;
	return 0;
}
