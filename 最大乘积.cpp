#include<cstdio>
#include<algorithm>
using namespace std;
int a[1000001];
bool cmp(int m,int b){
	return m<b?1:0;
}int main(){
	int n;
	scanf("%d",&n);
	int cnt=0;
	while(n>4){
		a[++cnt]=3;
		n-=3;
	}
	if(n==4){
		a[++cnt]=2;
		a[++cnt]=2;
	}else if(n==3){
		a[++cnt]=3;
	}else if(n==2){
		a[++cnt]=2;
	}else if(n==1){
		a[++cnt]=1;
	}sort(a+1,a+1+cnt,cmp);
	for(int i=1;i<=cnt;i++)
		printf("%d ",a[i]);
	return 0;
}