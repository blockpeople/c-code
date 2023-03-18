#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string a[25];
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	//≈≈–ÚÀ„∑®£¨≈≈–Ú∑Ω∑® 
	sort(a,a+n);
	for(int i=0;i<=n;i++){
		cout<<a[i]<<endl;
	}
	return 0;
}
