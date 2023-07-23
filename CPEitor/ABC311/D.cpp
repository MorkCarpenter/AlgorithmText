#include<iostream>
using namespace std;
char map[205][205];
bool ok[205][205];
long long ans;
int n, m;
void solve(int x, int y) {
	ans += 1;
	ok[x][y] = true;
	for (int i = 1; i <= 200; ++i) {
		if (map[x + i][y] == '#') {
				ans += i - 2;
			if (!ok[x + i - 1][y]) {
				solve(x + i - 1, y);
			}
			break;
		}
	}
	for (int i = 1; i <= 200; ++i) {
		if (map[x][y + i] == '#') {
				ans += i - 2;
			if (!ok[x][y + i - 1]) {
				solve(x, y + i - 1);
			}
			break;
		}
	}
	for (int i = 1; i <= 200; ++i) {
		if (map[x - i][y] == '#') {
				ans += i - 2;
			if (!ok[x - i + 1][y]) {
				solve(x - i + 1, y);
			}
			break;
		}
	}
	for (int i = 1; i <= 200; ++i) {
		if (map[x][y - i] == '#') {
				ans += i - 2;
			if (!ok[x][y - i + 1]) {
				solve(x, y - i + 1);
			}
			break;
		}
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin >> n >> m;
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= m; ++j) {
			cin >> map[i][j];
		}
	}
	solve(2, 2);
	cout << ans << "\n";
	return 0;
}