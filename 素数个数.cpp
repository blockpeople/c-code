#include <iostream>
using namespace std;
int f(int i){
	for(int j=2;j<i;j++){
		if(i%j==0){
			return 0;
		}
	}
	return 1;			
}
int main() {
	int n,s=0;
	cin>>n;		 
	for(int i=2;i<=n;i++){
		if(f(i)){
			s++;
		}
	}
	cout<<s;
	return 0; 
}
