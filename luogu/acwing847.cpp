#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<deque>
#include<unordered_map>
#include<algorithm>
using namespace std;
deque<string>que;
unordered_map<string, int>t;
char map[5][5];
int op[4][2] = { {1,0},{0,1},{-1,0},{0,-1} };
inline void tomap(const string& str) {
	int idx = 0;
	for (int i = 1; i <= 3; ++i) {
		for (int j = 1; j <= 3; ++j) {
			map[i][j] = str[idx++];
		}
	}
}
inline string getstr() {
	string ans = "";
	for (int i = 1; i <= 3; ++i) {
		for (int j = 1; j <= 3; ++j) {
			ans += map[i][j];
		}
	}
	return ans;
}
string in;
int main() {
	char a;
	for (int i = 0; i < 9; ++i) {
		cin >> a;
		in += a;
	}
	que.push_back(in);
	while (!que.empty()) {
		string now = que.front();
		tomap(now);
		for (int i = 1; i <= 3; ++i) {
			for (int j = 1; j <= 3; ++j) {
				if (map[i][j] == 'x') {
					for (int k = 0; k < 4; ++k) {
						string next;
						if (map[i + op[k][0]][j + op[k][1]]) {
							swap(map[i][j], map[i + op[k][0]][j + op[k][1]]);
							next = getstr();
							if (t.find(next) == t.end()) {
								t.insert({ next, t[now] + 1 });
								que.push_back(next);
							}
							swap(map[i][j], map[i + op[k][0]][j + op[k][1]]);
						}
					}
				}
			}
		}
		que.pop_front();
	}
	if (t.find("12345678x") != t.end())cout << t["12345678x"];
	else cout << -1;
	return 0;
}