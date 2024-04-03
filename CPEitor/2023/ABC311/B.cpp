#include<iostream>
using namespace std;
char map[105][105];
int n,d;
int ans;
int sum;
int main(){
	ios::sync_with_stdio(false);
	cin>>n>>d;
	for(int i=0;i<n;++i){
		for(int j=0;j<d;++j){
			cin>>map[i][j];
		}
	}
	for(int i=0;i<d;++i){
		if(map[0][i]=='o'){
			for(int j=0;j<n;++j){
				if(map[j][i]!='o'){
					ans = ans>sum?ans:sum;
					sum=0;
					goto next;
				}
			}
			++sum;
		}else{
			ans = ans>sum?ans:sum;
			sum=0;
		}
		next:;
	}
	ans = ans>sum?ans:sum;
	cout<<ans<<"\n";
	return 0;
}