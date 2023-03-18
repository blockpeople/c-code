#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
struct stu{
	string name;
	int yw,sx,fs;
}stu1[105];
bool comp(stu x,stu y){
	return x.yw>y.sx;
}
int n; 
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>stu1[i].name;
		cin>>stu1[i].yw;
		cin>>stu1[i].sx;
		stu1[i].fs=stu1[i].yw+stu1[i].sx;
	}
	sort(stu1,stu1+n-1,comp);
	for(int i=1;i<=n;i++){
		cout<<stu1[i].name<<" "<<stu1[i].yw<<" "<<stu1[i].sx<<" "<<stu1[i].fs;
	}
}
