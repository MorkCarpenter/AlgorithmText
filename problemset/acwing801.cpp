#include<iostream>
using namespace std;

int main(){
	int n,in;
	int ans;
	scanf("%d",&n);
	while(n--){
		ans=0;
		scanf("%d",&in);
		while(in){
			if(in&1){
				++ans;
			}
			in = in>>1;
		}
		printf("%d ",ans);
	}
	return 0;
}
