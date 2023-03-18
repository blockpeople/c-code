#include<cstdio>
#include<iostream>
using namespace std;
int n;
struct stu{
	int t,p;
}a[1009];
void qswap(int x,int y){
	stu tmp=a[x];
	a[x]=a[y];
	a[y]=tmp;
	return;
}int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d%d",&a[i].t,&a[i].p);
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(a[i].t+a[i].p>a[j].t+a[j].p){
				qswap(i,j);
			}
		}
    }int ans=-a[1].p,sum=a[1].t;
	for(int i=2;i<=n;i++){
		ans=max(ans,sum-a[i].p);
		sum+=a[i].t;
		
	}printf("%d",ans);
	return 0;
}