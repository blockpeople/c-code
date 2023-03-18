#include<iostream>
using namespace std;
void fun(int a){
    if(a){//如果a>0
        fun(a/2);
        cout<<a%2;
    }
    return ;//结束
}
int main(){
    int n;
    cin>>n;
    fun(n);
    return 0;
}