#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<deque>
using namespace std;
bool map[105][105];
int n, m;
int op[4][2] = { {1,0},{0,1},{-1,0},{0,-1} };
struct node {
	int x, y;
	int idx;

};
deque<node>que;
int main() {
	int in;
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;

	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= m; ++j) {
			cin >> in;
			if (in == 0) {
				map[i][j] = true;
			}
		}
	}
	que.push_back({ 1,1,0 });
	map[1][1] = false;
	while (!que.empty()) {
		node now = que.front();
		que.pop_front();
		if (now.x == n && now.y == m) {
			cout << now.idx;
			return 0;
		}
		for (int i = 0; i < 4; ++i) {
			if (map[now.x + op[i][0]][now.y + op[i][1]]) {
				que.push_back({ now.x + op[i][0] ,now.y + op[i][1] ,now.idx + 1 });
				map[now.x + op[i][0]][now.y + op[i][1]] = false;
			}
		}
	}
}