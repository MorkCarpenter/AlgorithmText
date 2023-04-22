//#include<iostream>
//using namespace std;
//
//long long ans, sum, asum, depth;
//int map[12][12];
//bool flag[12][12];
//int n, m;
//
//void dfs(int x, int y) {
//	if (flag[x][y])return;
//	if (x<1 || x>n || y<1 || y>m || asum > sum / 2||depth > ans)return;
//	if (asum == sum / 2) {
//		ans = ans >= depth ? depth : ans;
//	}
//	asum += map[x][y];
//	flag[x][y] = true;
//	++depth;
//	dfs(x -1, y);
//	dfs(x, y - 1);
//	dfs(x + 1, y);
//	dfs(x, y+1);
//	asum -= map[x][y];
//	flag[x][y] = false;
//	--depth;
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin >> m >> n;
//	for (int i = 1; i <= n; ++i) {
//		for (int j = 1; j <= m; ++j) {
//			cin >> map[i][j];
//			sum += map[i][j];
//		}
//	}
//	ans = 105;
//	dfs(1, 1);
//	cout << ans << endl;
//	return 0;
//}