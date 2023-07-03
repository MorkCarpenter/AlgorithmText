#include<iostream>
#include<cstring>

using namespace std;
const int MAX =2e5+9;
int tree[MAX];
int tmp[MAX];
int list[MAX][2];
int find(int x){
	if(x!=tree[x])return tree[x]=find(tree[x]);
	else return x;
}
int n,m,k,q;
int a,b;
bool ok(){
	for(int i=0;i<k;++i){
		if(find(list[i][0])==find(list[i][1]))return false;
	}
	return true;
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;++i)tree[i]=i;
	for(int i=1;i<=m;++i){
		cin>>a>>b;
		if(find(a)!=find(b)){
			tree[a]=b;
		}
	}
	cin>>k;
	for(int i=0;i<k;++i){
		cin>>list[i][0]>>list[i][1];
	}
	memcpy(tmp,tree,sizeof(tree));
	cin>>q;
	for(int i=0;i<q;++i){
		memcpy(tree,tmp,sizeof(tree));
		cin>>a>>b;
		if(find(a)!=find(b))tree[find(a)]=b;
		if(ok())cout<<"Yes"<<"\n";
		else cout<<"No""\n";	
	}
	return 0;
	
}