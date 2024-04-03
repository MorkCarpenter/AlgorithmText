#include<iostream>
using namespace std;
int ok[3];
int main(){
	int n;
	string in;
	cin>>n>>in;
	for(int i=0;i<n;++i){
		if(in[i]=='A')ok[0]=1;
		else if(in[i]=='B')ok[1]=1;
		else if(in[i]=='C')ok[2]=1;
		if(ok[0]&&ok[1]&&ok[2]){
			cout<<i+1<<"\n";
			return 0;
		}
	}
}