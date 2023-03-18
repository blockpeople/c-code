#include <bits/stdc++.h>
using namespace std;
int n,y,a,b,sum;
double ans1, ans2;
struct js{
    double w,v,z;
}t[1006];
bool cmp(js x,js y){
    return x.z>y.z;
}
int main(){
    cin>>n>>y;
    for(int i=1;i<=n;i++)
        cin>>t[i].w;
    for(int i=1;i<=n;i++)
        cin>>t[i].v;
    for (int i=1;i<=n;i++)
        t[i].z=t[i].v/t[i].w;
    cin>>a>>b;
    sort(t + 1, t + n + 1, cmp);
    for(int i=1;i<=n;i++){
        if(sum+t[i].w<y)
            ans1+=t[i].v,sum+=t[i].w;
        else if(sum+t[i].w>=y){
            ans1+=(y-sum)*t[i].z;
            break;
        }
    }sum=0,y-=a,ans2=b;
    for(int i=1;i<=n;i++){
        if(sum+t[i].w<y)
            ans2+=t[i].v,sum+=t[i].w;
        else if(sum+t[i].w>=y){
            ans2+=(y-sum)*t[i].z;
            break;
        }
    }printf("%.3lf",max(ans1,ans2));
    return 0;
}