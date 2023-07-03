#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
constexpr int M = 2e5+9;
int dp[M],id[M];
int t,n;
int a,b;
int ans;
vector<pair<int,int> >list[M];
void dfs(int x){
	for(auto i:list[x]){
		if(!dp[i.first]){
			dp[i.first]=dp[x]+(id[x]>=i.second);
			id[i.first]=i.second;
			dfs(i.first);
		}
	}
}
void solve(){
	ans = 0;
	cin>>n;
	for(int i=0;i<=n;++i){
		dp[i]=id[i]=0;
		list[i].clear();
	}
	for(int i=1;i<n;++i){
		cin>>a>>b;
		list[a].push_back({b,i});
		list[b].push_back({a,i});
	}
	dp[1]=1;
	dfs(1);
	for(int i=0;i<=n;++i){
		ans = max(dp[i],ans);
	}
	cout<<ans<<"\n";
}
int main(){
	ios::sync_with_stdio(false);
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}