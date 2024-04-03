#include<iostream>
using namespace std;
int ans[5005];
char in[5005];
int n;
int main(){
	scanf("%d %s",&n,in);
	for(int i=1;i<n;++i){
		for(int k=0;k+i<n;++k){
			if(in[k]==in[k+i]){
				break;
			}
			++ans[i];
		}
	}
	for(int i=1;i<n;++i){
		printf("%d\n",ans[i]);
	}
	return 0;
}