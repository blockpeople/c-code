#include<cstdio>
#include<iostream>
#include<algorithm>
int a[2003];
int n,ans=0;
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	std::sort(a+1,a+1+n);
	int p=0;
	for(int i=n;i>=1;i--){
		if(4*a[2]>a[1]+a[i]){
			p=i;
			break;	
		}
	}if(2*p-1>=n){
		if(n%2==0&&a[1]+a[n/2+1]>2*a[2]){
			ans+=2*a[2];
			n--;	
		}
		for(int i=2;i<=n/2+1;i++)
			ans+=a[1]+a[i];
		ans-=a[1];	
	}else{
		ans+=2*a[2]*(n-(2*p-1));
		for(int i=2;i<=p;i++)
			ans+=a[1]+a[i];
		ans-=a[1];
	}printf("%d\n",ans);	
	return 0;
}