#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<algorithm>
using namespace std;
int nums[400005], n, m,now;
int main() {
	ios::sync_with_stdio(false);
	cin >> n;
	while (n--) {
		cin >> m;
		for (int i = 1; i <= m; ++i) {
			cin >> nums[i];
		}
		now = 200100;
		for (int i = m; i > 0; --i) {
			now = min(i - nums[i], now);
			nums[i] = (i > now ?  1 : 0);
		}
		for (int i = 1; i <= m; ++i) {
			cout << nums[i] << " ";
		}
		cout << endl;
	}
	return 0;
}