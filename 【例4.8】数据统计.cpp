#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int x,n=0,min=1000,max=-9999;
	double s=0;
	while(scanf("%d",&x)==1){
		s+=x;
		if(x<min){
			min=x;
		}
		if(x>max){
			max=x;
		}
		n++;
	}
		cout<<min<<" "<<max<<" "; 
		cout<<setprecision(3)<<fixed<<s/n;
	return 0;
}
