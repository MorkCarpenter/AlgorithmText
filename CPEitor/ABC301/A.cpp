#include<iostream>
using namespace std;
char in;
int n;
int a,b;
int main(){
	ios::sync_with_stdio(false);
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>in;
		if(in=='A')++b;
		else ++a;
	}
	if(a==b){
		cout<<(in=='A'?'T':'A');
	}else{
		if(a>b){
			cout<<"T";
		}else{
			cout<<"A";
		}
	}
	return 0;
}