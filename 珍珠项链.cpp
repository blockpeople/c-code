#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,temp1=0;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }for(int i=0;i<n;i++){
        long long int temp=0;
        for(int j=i;j>=0;j--){
            temp+=a[j];
        }//cout<<temp<<" ";
        //cout<<i<<" ";
        if(i+1>temp){
            temp1=i+1;
            //cout<<temp1<<" ";
            continue;
        }
    }
    cout<<temp1;
    return 0;
}