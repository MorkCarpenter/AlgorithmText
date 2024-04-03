#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long
int n;
ll dp [1005];
const ll mod = 1e9+7;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	dp[0]=1;
	for(int i=1;i<=n;++i){
		for(int j=i;j<=n;++j){
			dp[j]=(dp[j-i]+dp[j])%mod;
		}
	}
	cout<<dp[n];
	return 0;
}