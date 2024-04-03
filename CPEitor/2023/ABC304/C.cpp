#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;
bool ok[2005];
double map[2005][2005];
double nodes[2005][2];
int n;
double l;
vector<int>que;
inline double ws(int x, int y, int z, int q) {
	return sqrt(pow((double)(x - z), 2) + pow((double)(y - q), 2));
}
void dfs(int x){
	for(int i=1;i<=n;++i){
		if(map[x][i]<=l&&!ok[i]){
			ok[i]=true;
			dfs(i);
		}
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin >> n >> l;
	que.push_back(1);
	ok[1]=true;
	for (int i = 1; i <= n; ++i) {
		cin >> nodes[i][0] >> nodes[i][1];
	}
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j != i && j <= n; ++j) {
			map[i][j] = map[j][i] = ws(nodes[i][0], nodes[i][1], nodes[j][0], nodes[j][1]);
		}
	}
	dfs(1);
	for(int i=1;i<=n;++i){
		if(ok[i]){
			cout<<"Yes"<<"\n";
		}else{
			cout<<"No"<<"\n";
		}
	}
	return 0;
}