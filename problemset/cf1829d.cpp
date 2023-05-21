#include<iostream>
#include<algorithm>
using namespace std;
int dp[300][300];
bool dfs(int x,int m){
	if(x<m)return false;
	if(x==m)return true;
	if(x%3!=0)return false;
	return max(dfs(x/3,m),dfs(((x/3)*2),m));
}
int n,m;
int t;
int main(){
	ios::sync_with_stdio(false);
	cin>>t;
	while(t--){
		cin>>n>>m;
		if(dfs(n,m))cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}