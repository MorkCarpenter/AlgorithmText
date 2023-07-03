#include<iostream>
#include<algorithm>
using namespace std;
int dp[1000];
int n,m;
int a,b,c;

int main(){
	ios::sync_with_stdio(false);
	cin>>n>>m;
	for(int i=0;i<n;++i){
		cin>>a>>b>>c;
		while(c--){
			for(int i=m;i>=a;--i){
				dp[i]=max(dp[i],dp[i-a]+b);
			}
		}
	}
	cout<<dp[m];
	return 0;
}