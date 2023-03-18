#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	float a,b;
	cin>>a>>b;
	cout<<setprecision(3)<<fixed<<b/a*100<<"%";
return 0;
}
