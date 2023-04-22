#include<iostream>
using namespace std;
int n;
int map[7][7];
int flag;
char in;
int stx, sty;
int max_depth;
constexpr int dx[8] = { 1,2, 2, 1,-1,-2,-2,-1 };
constexpr int dy[8] = { 2,1,-1,-2,-2,-1, 1, 2 };

//估值
const int guzhi_map[7][7] = {
	{0,0,0,0,0,0,0},
	{0,1,1,1,1,1,0},
	{0,0,1,1,1,1,0},
	{0,0,0,2,1,1,0},
	{0,0,0,0,0,1,0},
	{0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0}
};
inline int evaluate() {
	int res = 0;
	for (int i = 1; i < 6; ++i) {
		for (int j = 1; j < 6; ++j) {
			if (map[i][j] != guzhi_map[i][j])++res;
		}
	}
	return res;
}

inline bool is_safe(int x,int y) {
	if (x < 1 || x>5 || y < 1 || y>5)return true;
	return false;
}

inline void funca(int depth, int x, int y, int max_depth) {
	if (depth == max_depth) {
		if (evaluate() == 0)flag = 1;
		return;
	}
	for (int i = 0; i < 8; ++i) {
		int xx = x + dx[i];
		int yy = y + dy[i];
		if (is_safe(xx, yy))continue;
		swap(map[x][y], map[xx][yy]);
		int eva = evaluate();
		if (eva + depth <= max_depth) {
			funca(depth + 1, xx, yy, max_depth);
		}
		swap(map[x][y], map[xx][yy]);
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin >> n;
	while (n--) {
		for (int i = 1; i < 6; ++i) {
			for (int j = 1; j < 6; ++j) {
				cin >> in;
				if (in == '*') {
					map[i][j] = 2;
					stx = i, sty = j;
				}
				else {
					map[i][j] = in - '0';
				}
			}
		}
		if (evaluate() == 0) {
			cout << "0" << endl;
			continue;
		}
		flag = 0;
		for (max_depth = 1; max_depth < 16; ++max_depth) {
			funca(0, stx, sty, max_depth);
			if (flag)break;
		}
		if (flag) {
			cout << max_depth << endl;
		}
		else {
			cout << "-1" << endl;
		}
	}
	return 0;
}