#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	cout<<fixed<<setprecision(2)<<n-m*0.8;
	return 0;
}
