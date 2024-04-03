#include<iostream>
using namespace std;
string in;
size_t n;
long long ans,tmp;
long long nums[100];
int main(){
	ios::sync_with_stdio(false);
	cin>>in>>n;
	tmp = 1;
	for(int i=in.size()-1;i>=0;--i){
		if(in[i]=='?'){
			nums[i]=tmp;
		}
		if(in[i]=='1'){
			ans+=tmp;
		}
		tmp<<=1;
	}
	for(int i=0;i<in.size();++i){
		if(ans+nums[i]<=n){
			ans+=nums[i];
		}
	}
	if(ans>n)cout<<-1;
	else cout<<ans;
	return 0;
}
