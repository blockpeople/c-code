#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int n){
    for(int i = 2; i <= sqrt(n); ++i)
        if(n % i == 0)
            return false;
    return true;
}
int main(){
    int n;
    cin >> n;
    bool isEmpty = true;
    for(int i = 4; i <= n; ++i){
        if(isPrime(i) && isPrime(i-2)){
            isEmpty = false;
            cout << i-2 << ' ' << i << endl;
        }
    }
    if(isEmpty)
        cout << "empty";
    return 0;
}

