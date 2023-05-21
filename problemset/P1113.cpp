#include<iostream>
using namespace std;

int n, a, b, tmp, event[10005];
int ans, sign;

int main() {
	ios::sync_with_stdio(false);
	cin >> n;

	for (int i = 1; i <= n; ++i) {
		cin >> a >> b;
		tmp = 0;
		while (1) {
			cin >> sign;
			if (!sign)break;
			tmp = max(tmp, event[sign]);
		}
		event[i] = tmp + b;
		ans = max(ans, event[i]);
	}
	cout << ans << endl;
	return 0;
}