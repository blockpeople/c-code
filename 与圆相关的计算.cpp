#include<cstdio>  
#include<iostream> 
using namespace std;
const double PI=3.14159;
int main()
{
double r,c,s,d;
	cin>>r;
	c=2*PI*r;
	s=PI*r*r;
	d=2*r;
	printf("%.4lf %.4lf %.4lf",d,c,s);
	getchar();
}
