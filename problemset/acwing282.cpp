#include<iostream>
#include<algorithm>
using namespace std;
int n;
int dp[305][305];
int s[305];
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;++i){
		scanf("%d",&s[i]);
		s[i]+=s[i-1];
	}
	for(int len = 1;len<n;++len){
		for(int i=1;i+len<=n;++i){
			int l=i,r=i+len;
			dp[l][r]=0x3f3f3f3f;
			for(int k=l;k<r;++k){
				dp[l][r]=min(dp[l][r],dp[l][k]+dp[k+1][r]+s[r]-s[l-1]);
			}
		}
	}
	printf("%d",dp[1][n]);
	return 0;
}