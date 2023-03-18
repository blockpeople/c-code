#include <iostream>
#include <cstring>
using namespace std;
char str[100000],a[26]={0};
int main(){
	cin>>str;
	long len = strlen(str);
	for (int i=0;i<len;i++)
		a[str[i]-'a']++;
	for (int i=0;i<len;i++)
		if (a[str[i]-97] == 1){
			cout << str[i];
			return 0;
		}
	cout << "no";
	return 0;
}