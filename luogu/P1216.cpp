#include<iostream>
#include<algorithm>
using namespace std;
int n;
int dp[1005][1005];
int s[305];
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;++i){
		for(int j=1;j<=i;++j){
			scanf("%d",&dp[i][j]);
			dp[i][j]+=max(dp[i-1][j-1],dp[i-1][j]);
		}
	}
	int ans =0;
	for(int i=1;i<=n;++i){
		if(ans<dp[n][i])ans=dp[n][i];
	}
	printf("%d",ans);
	return 0;
}