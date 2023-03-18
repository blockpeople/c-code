#include<bits/stdc++.h>
using namespace std;
int main(){
	char a[1005];
	bool b=true;
	while(cin>>a){
		if(b)
			b=false;
		else
			cout<<',';
		cout<<strlen(a);
	}return 0;
}
