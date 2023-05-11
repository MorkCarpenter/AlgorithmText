#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<algorithm>
using namespace std;
int n;
int tire[3100005][2], idx = 0;
int nums[100005];
void insert(int x) {
	int p = 0;
	for (int i = 30; i >= 0; --i) {
		int u = (x >> i) & 1;
		if (tire[p][u]) {
			p = tire[p][u];
		}
		else {
			tire[p][u] = ++idx;
			p = tire[p][u];
		}
	}
}
int compare(int x) {
	int p = 0;
	int res = 0;
	for (int i = 30; i >= 0; --i) {
		int u = (x >> i) & 1;
		if (tire[p][!u]) {
			res = res * 2 + 1;
			p = tire[p][!u];
		}
		else {
			res = res * 2 + 0;
			p = tire[p][u];
		}
	}
	return res;
}
int main() {
	int ans = 0;
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> nums[i];
		insert(nums[i]);
	}
	for (int i = 0; i < n; ++i) {
		ans = max(ans, compare(nums[i]));
	}
	cout << ans;
	return 0;
}