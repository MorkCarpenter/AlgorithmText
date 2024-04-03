#include<iostream>
#include<string>
using namespace std;
int n;
int a,b;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	cin>>a;
	cout<<a<<" ";
	for(int i=1;i<n;++i){
		cin>>b;
		if(a>b){
			for(int j=a-1;j>b;--j){
				cout<<j<<" ";
			}
		}else{
			for(int j= a+1;j<b;++j){
				cout<<j<<" ";
			}
		}
		cout<<b<<" ";
		a= b;
	}
	return 0;
}