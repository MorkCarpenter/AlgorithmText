#include<iostream>
using namespace std;


int a, b, c, d;
int n, m;
int tree[500005];
inline auto lowbit(int x) -> int {
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
	b = 0;
	for (int i = 1; i <= n; ++i) {
		cin >> a;
		add(i, a - b);
		b = a;
	}
	for (int i = 0; i < m; ++i) {
		cin >> a;
		if (a == 1) {
			cin >> b >> c >> d;
			add(b, d);
			add(c + 1, -d);
		}
		else {
			cin >> b;
			cout << sum(b) << endl;
		}
	}
	return 0;

}