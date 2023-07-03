#include<iostream>
#include<algorithm>

using namespace std;
int n;
int  a,b;
void solve(){
	cin>>a>>b;
	b=min(b,30);
	cout<<min(1<<b,a+1)<<"\n";		
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	cin>>n;
	while(n--)solve();
	return 0;
}