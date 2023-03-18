#include<iostream>
#include<string>
using namespace std;
bool compare(string a,string b){
    if(a+b>=b+a){
        return false;
    }return true;
}int main(){
    long int n;
    cin>>n;
    string arr[1005],temp;
    for(int a=0;a<n;a++){
        cin>>arr[a];
    }for(int i=0;i<n-1;i++){
        for(int j=n-1;j>i;j--){
            if(compare(arr[j-1],arr[j])){
                temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
        }
    }for(int k=0;k<n;k++){
        cout<<arr[k];
    }cout<<endl;
    return 0;
}