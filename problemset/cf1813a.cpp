#include<iostream>
#include<cstring>
using namespace std;
bool ok[105];
int n,t;
int nums[105];
int ans[105];
int main(){
	cin>>n;
	while(n--){
		memset(ok,0,sizeof(ok));
		cin>>t;
		for(int i=0;i<t;++i){
			cin>>nums[i];
			ans[i]=t+1-nums[i];
		}
		for(int i= 0;i<t;++i){
			cout<<ans[i]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}