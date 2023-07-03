#include<iostream>
using namespace std;
#define ll long long
int t;
ll in;
int jin[15]={0,1,2,3,5,6,7,8,9};
int ans[100];
void slove(ll x){
	int idx=0;
	while(x){
		ans[idx++]=jin[x%9];
		x/=9;
	}
	for(int i=idx-1;i>=0;--i){
		cout<<ans[i];
	}
	cout<<"\n";
}
int main(){
	ios::sync_with_stdio(false);
	cin>>t;
	while(t--){
		cin>>in;
		slove(in);
	}
	return 0;
}