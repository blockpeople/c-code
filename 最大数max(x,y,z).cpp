#include<iostream>
#include<iomanip>
using namespace std;
int m;
double max(double a,double b,double c){
	m=a;
	if(m>b){
		if(m<c){
			m=c;
		}
	}
	else{
		m=b;
		if(m<c){
			m=c;
		}
	}
	return m;
}
int main(){
	double q,w,e;
	cin>>q>>w>>e;
	cout<<setprecision(3)<<fixed<<max(q,w,e)/(max(q+w,w,e)*max(q,w,w+e));
}
