#include<bits/stdc++.h>
using namespace std;
struct node{
	long long x,y;
};
node a[5005];
long long n,cnt,ans;
bool cmp(node x,node y){
	return x.y<y.y;
}
long long use;
priority_queue<long long> q;
int main(){
	cin >> n;
	for(int i=1;i<=n;i++){
		cin>>a[i].x>>a[i].y;
	}
	sort(a+1,a+n+1,cmp); 
	for(int i = 1;i <= n;i++){
		use += a[i].x;
		q.push(a[i].x);
		ans++;
		if(use > a[i].y){
			use -= q.top();
			q.pop();
			ans--;
		}
	}
	cout << ans;
	return 0;
}
