#include<iostream>
#include<cstring>
using namespace std;
int map[200005];
int n;
int nums[200005],ans,top;
bool ok[200005];
bool ok2[200005];
bool flag;
void dfs(int x,int begin){
	nums[top++]=x;
	ok[x]=true;
	if(map[x]==begin){
		cout<<top<<"\n";
		for(int i=0;i<top;++i){
			cout<<nums[i]<<" ";
		}
		exit(0);
	}
	if(!ok[map[x]]){
		dfs(map[x],begin);
	}else{
		memset(ok,0,sizeof(ok));
		top = 0;
		dfs(map[x],map[x]);
		
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin>>n;
	for(int i=1;i<=n;++i){
		cin>>map[i];
	}
	for(int i=1;i<=n;++i){
		if(!ok[i]){
			top=0;
			dfs(i,i);
		}
		if(flag)return 0;
	}
}