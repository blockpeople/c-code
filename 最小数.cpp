#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int n;
    cin>>s>>n;
    int len=s.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<len-1;j++){
            if(s[j]>s[j+1]){
                for(int k=j;k<len-1;k++)
                    s[k]=s[k+1];
                    break;
            }
        }len--;
    }bool flag=false;
    for(int i=0;i<len;i++){
        if(s[i]!='0')
            flag=true;
        if(flag)
        cout<<s[i];
    }cout<<endl;
    return 0;
}