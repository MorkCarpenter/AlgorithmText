#include<iostream>
#include<cstring>
using namespace std;
char ans[100];
int top;
char in[110];
int t;

void solve(){
	char ok = 0;
	top = 0;
	cin>>t>>in;
	for(int i=0;i<t;++i){
		if(!ok){
			ok=in[i];
		}
		else if(ok==in[i]){
			ans[top++]=ok;
			ok=0;
		}
	}
	ans[top]=0;
	cout<<ans<<"\n";
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	while(n--)solve();
}