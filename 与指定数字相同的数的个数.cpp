#include<iostream>
using namespace std;
int main(){
    int n,m,num=0;
    int a[105];
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    cin>>m;
    for(int i=1;i<=n;i++){
    	if(a[i]==m){
    		num++;
		}
	}
    cout<<num<<endl;
    return 0;
}
