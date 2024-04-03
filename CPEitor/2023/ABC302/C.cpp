#include<iostream>
#include<vector>
using namespace std;
int map[10][10];
vector<string>nums(10);
int n,m;
bool flag[10];
bool dfs(int x, int idx) {
	if (idx == n)return true;
	for (int i = 1; i <= n; ++i) {
		if (i == x)continue;
		if (map[x][i] == 1 && !flag[i]) {
			flag[i] = true;
			if (dfs(i, idx + 1)) {
				return true;
			}
			flag[i] = false;
		}
	}
	return false;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; ++i) {
		cin >> nums[i];
	}
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n && j != i; ++j) {
			for (int t = 0; t < m; ++t) {
				if (nums[i][t] != nums[j][t]) {
					++map[i][j];
					++map[j][i];
				}
			}
		}
	}
	for (int i = 1; i <= n; ++i) {
		flag[i] = true;
		if (dfs(i, 1)) {
			cout << "Yes";
			return 0;
		}
		flag[i] = false;
	}
	cout << "No";
	return 0;
}