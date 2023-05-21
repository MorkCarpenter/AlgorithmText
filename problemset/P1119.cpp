//P1119
#include<iostream>
using namespace std;
int n, m;
int _time[205];
int road[205][205];

inline void update(int k) {
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if (road[i][j] > road[i][k] + road[k][j]) {
				road[j][i] = road[i][j] = road[i][k] + road[k][j];
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	int a, b, c, d, now = 0;
	cin >> n >> m;
	for (int i = 0; i < n; ++i) {
		cin >> _time[i];
	}
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			road[i][j] = INT_MAX;
		}
	}
	for (int i = 0; i < n; ++i)
		road[i][i] = 0;
	for (int i = 0; i < m; ++i) {
		cin >> a >> b >> c;
		road[a][b] = road[b][a] = c;
	}
	cin >> d;
	for (int i = 0; i < d; ++i) {
		cin >> a >> b >> c;
		while (_time[now] <= c && now < n) {
			update(now);
			++now;
		}
		if (_time[a] > c || _time[b] > c)
			cout << -1 << endl;
		else {
			if (road[a][b] == INT_MAX) {
				cout << -1 << endl;
			}
			else {
				cout << road[a][b] << endl;
			}

		}
	}
	return 0;
}