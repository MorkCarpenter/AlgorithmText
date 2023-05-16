#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<deque>
#include<string>
#include<unordered_map>
#include<vector>
#include<set>
using namespace std;
deque<string>que;
unordered_map< string, vector<string>>map;
unordered_map< string, int >du;
int n;
int cnt = 0;
set<string>s;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	vector<string>str1(n), str2(n);
	for (int i = 0; i < n; ++i) {
		cin >> str1[i] >> str2[i];
		map[str1[i]].push_back(str2[i]);
		++du[str2[i]];
		s.insert(str1[i]);
		s.insert(str2[i]);
	}
	for (auto i : s) {
		if (du.find(i) == du.end()) {
			que.push_back(i);
			++cnt;
		}
		else {
			if (du[i] == 0) {
				que.push_back(i);
				++cnt;
			}
		}
	}
	while (!que.empty()) {
		string now = que.front();
		que.pop_front();
		for (auto i : map[now]) {
			if (--du[i] == 0) {
				que.push_back(i);
				++cnt;
			}
		}
	}
	if (cnt < s.size()) {
		cout << "No";
	}
	else {
		cout << "Yes";
	}
	return 0;
}