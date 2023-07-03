#include<iostream>
#include<cstring>
using namespace std;
char str[5000];
int main(){
	cin>>str;
	int len = strlen(str);
	int i;
	for(int i=3;i<len;++i){
		str[i]='0';
	}
	puts(str);
	return 0;
}