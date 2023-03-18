#include<bits/stdc++.h>
using namespace std;
void nx(){
	char c=getchar();
	if(c=='!')
		return;
	nx();
	cout << c;
}int main(){
	nx();
	return 0;
}