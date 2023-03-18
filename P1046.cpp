#include<iostream>
using namespace std;
int a[15],b,num;
int main(){
    for(int i;i<10;i++){
        cin>>a[i];
    }cin>>b;
    b=b+30;
    for(int i;i<10;i++){
        if(b>=a[i]){
            num++;
        }
    }
    printf("%d",num);
    return 0;
}