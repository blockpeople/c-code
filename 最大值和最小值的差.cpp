#include<iostream>
using namespace std;
int main(){
	int m;
	int max_=0,min_=10000;
	int number;
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>number;
		if(number>max_){
			max_=number;
	}
		if(number<min_){
			min_=number;
		}
	}
	cout<<max_-min_<<endl;
	return 0;
}
