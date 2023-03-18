#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
ll n,sum,k=1;
int main(){
    scanf("%lld",&n);
    sum=n;
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=sum;j++){
            if(k<10){
				printf("0");
				printf("%lld",k);
			}else{
            	printf("%lld",k);
			}k++;
        }printf("\n");
        sum--;
    }
    return 0;
}