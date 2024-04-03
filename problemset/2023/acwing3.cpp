#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long
int n,m;
ll dp [1005];
int a,b;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>a>>b;
		for(int j=a;j<=m;++j){
			dp[j]=max(dp[j],dp[j-a]+b);
		}
	}
	cout<<dp[m];
	return 0;
}