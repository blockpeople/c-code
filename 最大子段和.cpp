# include <cstdio>
# include <cmath>
# include <cstring>
# include <algorithm>
using namespace std;
const int N_MAX = 2000000;
long long int n;
long long int a[N_MAX + 10];
int dp[N_MAX + 10];
int maxSum(){
	int ans = -2e9;
	for (int i = 1; i <= n; i++) {
		dp[i] = max(dp[i - 1],0)+a[i];
		ans = max(ans, dp[i]);
	}if(ans<1){
		return 0;
	}else{
	return ans;
	}
}
int main(){
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		scanf("%d", &a[i]);
	printf("%d\n", maxSum());
	return 0;
}
