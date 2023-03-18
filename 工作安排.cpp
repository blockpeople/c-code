#include<iostream>
#include<algorithm>
using namespace std;
long long int t[1006],n=0,ans=0;
struct Node{
    long long int d,p;
}a[1006];
bool cmp(Node a, Node b){
    return a.p>b.p;
}
int main(){
    scanf("%lld",&n);
    for(int i=1;i<=n;i++)
        scanf("%lld%lld",&a[i].d,&a[i].p);
    sort(a+1,a+n+1,cmp);
    for(int i=1;i<=n;i++)
        for(int j=a[i].d;j>=1;j--)
            if(t[j]==0){
                ans+=a[i].p;
                t[j]=1;
                break;
            }
    printf("%lld", ans);
    return 0;
}