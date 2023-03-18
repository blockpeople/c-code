#include <iostream>
using namespace std;
int n,a[1001],b[1001],x[1001],y[1001],c,d;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        b[i]=b[i-1]+a[i];
        x[i]=x[i-1]+i;
        y[i]=y[i-1]-i+n+1;
    }for(int i=1;i<=n;i++){
        if(b[i]!=x[i]){
            c++;
        }if(b[i]!=y[i]){
            d++;
        }
    }if(b[n]!=x[n]){
        cout<<-1;
    }else{
        cout<<min(c,d);
    }return 0;
}