#include<iostream>
#include<algorithm>
using namespace std;

int node_map[5005];//并查集
int nodenum = 0;
int ans = 0;
int n, m;//边和顶点
struct edge{
	int x, y;
	int weight;
}edges[200005];//边的数组
bool cmp(edge a, edge b) {
	return a.weight < b.weight;
}
int find(int x) {
	while (x != node_map[x]) x = node_map[x] = node_map[node_map[x]];
	return x;
}
int main() {
	int vx, ux;
	
	ios::sync_with_stdio(false);
	cin >> n >> m;
	for (int i = 0; i < m; ++i) {
		cin >> edges[i].x >> edges[i].y >> edges[i].weight;
	}
	for (int i = 1; i <= n; ++i) {
		node_map[i] = i;
	}
	sort(edges, edges + m, cmp);
	for (int i = 0; i < m; ++i) {
		vx = find(edges[i].x), ux = find(edges[i].y);
		if (vx == ux)continue;
		ans += edges[i].weight;
		node_map[ux] = vx;
		if (++nodenum == n - 1)break;
	}
	if (++nodenum == n)cout << ans << endl;
	else cout << "orz" << endl;
	return 0;
}