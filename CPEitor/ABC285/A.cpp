#include<iostream>
using namespace std;
inline bool func(int x,int y){
	if((x*2)==y||(x*2+1)==y)return true;
	return false;
}
int main(){
	int a,b;
	cin>>a>>b;
	if(func(a,b)||func(b,a))cout<<"Yes";
	else cout<<"No";
	return 0;
}