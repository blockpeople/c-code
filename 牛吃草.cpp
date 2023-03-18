#include<iostream>
using namespace std;
int main()
{
	int m1,n1,m2,n2;
	cin>>m1>>n1>>m2>>n2;
	int x=(m1*n1-m2*n2)/(n1-n2);
	cout<<x<<endl;
return 0;
}
