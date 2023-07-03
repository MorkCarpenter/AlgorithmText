#include<iostream>
#include<algorithm>
using namespace std;
int dp[505][505];
int ans;
int n;
int main(){
	ios::sync_with_stdio(false);
	cin>>n;
	for(int i=1;i<=n;++i){
		for(int j=1;j<=i;++j){
			cin>>dp[i][j];
		}
	}
	for(int i=n;i>=1;--i){
		for(int j=1;j<=n;++j){
			dp[i][j]=max(dp[i+1][j],dp[i+1][j+1])+dp[i][j];
			
		}
	}
	cout<<dp[1][1];
	return 0;
}