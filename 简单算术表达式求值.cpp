#include<iostream>
#include<string>
using namespace std;
void ss(int a,str b,int c){
    if(b=="+")
    	return a+c;
    	break;
    if(b=="-")
    	return a-c;
    	break;
    if(b=="*")
    	return a*c;
    	break;
    if(b=="/")
    	return a/c;
    	break;
    if(b=="%")
    	return a%c;
    	break;
}
int main(){
    int a,c;
    str b;
    cin>>a>>b>>c;
    cout<<ss(a,b,c);
}
