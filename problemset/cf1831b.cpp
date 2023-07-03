#include<iostream>
#include<cstring>
#include<algorithm>
#include<stdint.h>
#include<vector>
using namespace std;
int n;
int t;
constexpr size_t MAX = 4e5+9;
int ansa[MAX];
int ansb[MAX];
int a,b;
int ans;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	while(n--){
		//初始化条件
		int ans=0;
		int flag=0;
		int tmp=0;
		memset(ansa,0,sizeof(ansa));
		memset(ansb,0,sizeof(ansb));
		
		cin>>t;
		//输入a数组
		for(int i=0;i<t;++i){
			cin>>a;
			if(flag!=a){
				ansa[flag]=max(ansa[flag],tmp);
				flag=a;
				tmp=1;
			}else{
				++tmp;
			}
			
		}
		//a数组结尾的子序列
		ansa[flag]=max(ansa[flag],tmp);
		//清零
		flag=0;
		tmp=0;
		//输入b数组
		for(int i=0;i<t;++i){
			cin>>b;
			if(flag!=b){
				ansb[flag]=max(ansb[flag],tmp);
				flag=b;
				tmp=1;
			}else{
				++tmp;
			}
		}
		ansb[flag]=max(ansb[flag],tmp);
		for(int i=1;i<=t*2;++i)ans=max(ans,ansa[i]+ansb[i]);
		cout<<ans<<"\n";
	}
	return 0;
}