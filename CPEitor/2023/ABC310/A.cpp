#include<iostream>
#include <unordered_map>

using namespace std;
long long n,p,q;
long long mi = 0x3f3f;
long long tmp;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	cin>>n>>p>>q;
	cin>>mi;
	for(int i=1;i<n;++i){
		cin>>tmp;
		mi = mi<tmp?mi:tmp;
	}
	if(mi+q<p)cout<<mi+q<<"\n";
	else cout<<p<<"\n";
	return 0;
}