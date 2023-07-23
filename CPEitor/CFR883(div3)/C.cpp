#include <iostream>
#include <algorithm>
using namespace std;
struct node {
	long long x, y;
}nodes[200005];
long long nums[200005];
bool cmp(node a, node b) {
	return a.x == b.x ? a.y > b.y : a.x < b.x;
}
void solve() {
	long long ans = 1;
	int a, b, c;
	cin >> a >> b >> c;
	node me1{ 0,0 };
	for (int i = 1; i <= a; ++i) {
		node me2{ 0,0 };
		int sum = 0;
		for (int j = 1; j <= b; ++j)cin >> nums[j];
		sort(nums + 1, nums + b + 1);
		for (int j = 1; j <= b; ++j) {
			if ((sum + nums[j]) > c) {
				break;
			}
			sum += nums[j];
			me2.y += sum;
			++me2.x;
		}
		if (i > 1) {
			if (cmp(me1, me2))
				++ans;
		}
		else {
			me1 = me2;
		}
	}
	cout << ans << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	while (n--)solve();
	return 0;
}