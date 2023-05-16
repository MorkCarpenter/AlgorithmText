#include<iostream>
#include<cstring>
using namespace std;
char in[15];
long long ans;
int main(){
	scanf("%s",in);
	int len = strlen(in);
	for(int i=0;i<len;++i){
		ans*=26;
		ans+=in[i]-'A'+1;
	}
	cout<<ans;
	return 0;
}