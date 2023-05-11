#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int n;
bool ok[10];
int ans[10];
void dfs(int x) {
	if (x > n) {
		for (int i = 1; i <= n; ++i) {
			cout << ans[i] << " ";
		}
		cout << '\n';
	}
	for (int i = 1; i <= n; ++i) {
		if (!ok[i]) {
			ans[x] = i;
			ok[i] = true;
			dfs(x + 1);
			ok[i] = false;
		}
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin >> n;
	dfs(1);
	return 0;
}