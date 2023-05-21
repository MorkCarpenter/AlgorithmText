#include<iostream>
#include<algorithm>
using namespace std;
struct node{
	int x,y;
}nodes[100005];
int n;
bool cmp(node a,node b){
	return a.x<b.x;
}
int ans,b,e;
int main(){
	ans=1;
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;++i){
		cin>>nodes[i].x>>nodes[i].y;
	}
	sort(nodes+1,nodes+1+n,cmp);
	b=nodes[1].x,e=nodes[1].y;
	for(int i=2;i<=n;++i){
		if(e<nodes[i].x){
			ans++;
			e=nodes[i].y;
		}
		else if(e<nodes[i].y){
			e=nodes[i].y;
		}
	}
	cout<<ans;
	return 0;
}
