#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
#define ll long long
ll lista[200005],listb[200005];
ll n,m,d;
ll ans;
int main(){
	ios::sync_with_stdio(false);
	cin>>n>>m>>d;
	for(int i=0;i<n;++i){
		cin>>lista[i];
	}
	for(int i=0;i<m;++i){
		cin>>listb[i];
	}
	sort(lista,lista+n);
	sort(listb,listb+m);
	for(int i=0;i<n;++i){
		int l=0,r=m;
		while(l<r-1){
			int mid=l+r+1>>1;
			if(listb[mid]<lista[i]-d)l=mid;
			else if(listb[mid]>lista[i]+d)r=mid;
			else l=mid;
		}
		if(abs(listb[l]-lista[i])<=d)ans=max(ans,lista[i]+listb[l]);
	}
	if (ans==0)cout<<-1;
	else cout<<ans;
	return 0;
}