#include<iostream>
using namespace std;
int dp[1005];
int nums[1005];
int n;
int ans;
int main(){
	ios::sync_with_stdio(false);
	cin>>n;
	for(int i=1;i<=n;++i){
		cin>>nums[i];
	}
	for(int i=1;i<=n;++i){
		dp[i]=1;
		for(int j=1;j<i;++j){
			if(nums[j]<nums[i])dp[i]=max(dp[j]+1,dp[i]);
		}
		ans=max(ans,dp[i]);
	}
	cout<<ans;
	return 0;
}