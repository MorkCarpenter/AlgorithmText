#include<iostream>
#include<algorithm>
using namespace std;
struct node{
	long long sign;

	string v;

}nodes[105];
bool cmp(node a,node b){
	return a.sign<b.sign;
}

int main(){
	int n;
	cin>>n;
	long long ans = 0x3f3f3f3f;
	int tmp=0;
	for(int i=0;i<n;++i){
		cin>>nodes[i].v>>nodes[i].sign;
		if(ans>nodes[i].sign){
			tmp=i;
			ans=nodes[i].sign;
		}
	}
	for(int i=0;i<n;++i){
		cout<<nodes[(i+tmp)%n].v<<"\n";
	}
	return 0;
}