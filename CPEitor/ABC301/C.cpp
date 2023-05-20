#include<iostream>
#include<string>
using namespace std;
string a,b;
int numa[30],numb[30];
int main(){
	cin>>a>>b;
	for(auto i:a){
		if(i=='@'){
			++numa[29];
		}else{
			++numa[i-'a'];
		}
	}
	for(auto i:b){
		if(i=='@'){
			++numb[29];
		}else{
			++numb[i-'a'];
		}
	}
	for(int i=0;i<26;++i){
		switch(i){
		case 0:
		case 't'-'a':
		case 'c'-'a':
		case 'o'-'a':
		case 'd'-'a':
		case 'r'-'a':
		case 'e'-'a':
			if(numa[i]<numb[i]){
				numa[29] -=numb[i]-numa[i];
			}else{
				numb[29]-=numa[i]-numb[i];
			}
			break;
		default:
			if(numa[i]!=numb[i]){
				cout<<"No";
				return 0;
			}
		break;
		}
	}
	if(numa[29]!=numb[29]||numa[29]<0||numb[29]<0){
		cout<<"No";
		return 0;
	}else{
		cout<<"Yes";
		return 0;
	}
}