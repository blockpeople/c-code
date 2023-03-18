#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	double n,b=0,c=0,d=0,e=0,f;
	int a[105];
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(0>=a[i]&&a[i]<=18)
			e++;
		if(19>=a[i]&&a[i]<=35)
			b++;
		if(36>=a[i]&&a[i]<=60)
			c++;
		if(61<=a[i])
			d++;
	}
	cout<<setprecision(2)<<fixed<<e*1.0/n<<"%"<<endl;
	cout<<setprecision(2)<<fixed<<b*1.0/n<<"%"<<endl;
	cout<<setprecision(2)<<fixed<<c*1.0/n<<"%"<<endl;
	cout<<setprecision(2)<<fixed<<d*1.0/n<<"%"<<endl;
	return 0;
}
	
