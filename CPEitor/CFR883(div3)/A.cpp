#include<iostream>
using namespace std;
void solve(){
	int t;
	int a,b;
	int ans= 0;
	cin>>t;
	while(t--){
		cin>>a>>b;
		if(a>b)ans++;
	}
	cout<<ans<<"\n";
}
int main(){
	int n;
	cin>>n;
	while(n--)solve();
	return 0;
}