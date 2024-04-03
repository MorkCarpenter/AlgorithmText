#include<iostream>
using namespace std;
long long a,b;
int main(){
	scanf("%lld%lld",&a,&b);
	long long ans = (a-(a%b))/b;
	if(a%b>0)++ans;
	printf("%lld",ans);
	return 0;
}