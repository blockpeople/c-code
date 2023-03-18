#include<iostream>
using namespace std;
char ch[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
int a1,b1;
void jzzh(int n,int k){
    int a;
    a=n%k;
    n=n/k;
    if(n!=0){
        jzzh(n,k);
    }
    cout<<ch[a];
}
int main(){
    cin>>a1>>b1;
    jzzh(a1,b1);
    return 0;
}