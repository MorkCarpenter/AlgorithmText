#include<iostream>
using namespace std;

int in, n, m;
int a, b, c;
int tree[500005];
inline auto lowbit(int x) ->int {
	return x & (-x);
}
inline int sum(int x) {
	int res = 0;
	for (int i = x; i; i -= lowbit(i)) res += tree[i];
	return res;
}
inline void add(int x, int y) {
	for (int i = x; i <= n; i += lowbit(i))tree[i] += y;
}
int main() {
	ios::sync_with_stdio(false);
	cin >> n >> m;
	for (int i = 1; i <= n; ++i) {
		cin >> in;
		add(i, in);
	}
	for (int i = 0; i < m; ++i) {
		cin >> a >> b >> c;
		if (a == 1) {
			add(b, c);
		}
		else {
			cout << sum(c) - sum(b - 1)<<endl;
		}
	}
	return 0;
}