#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;


//#include<iostream>
//using namespace std;
//long long a, b, tmp;
//long long ans;
//void solve(long long& x, long long& y) {
//	if (y == 1) {
//		ans += x - 1;
//		x = 1;
//		return;
//	}
//	tmp = x % y;
//	if (tmp == 0) {
//		ans += x / y;
//		--ans;
//		x = y;
//		return;
//	}
//	ans += (x - tmp) / y;
//	x = tmp;
//}
//int main() {
//	ios::sync_with_stdio(false);
//	cin >> a >> b;
//	while (a != b) {
//		if (a > b) {
//			solve(a, b);
//		}
//		else {
//			solve(b, a);
//		}
//	}
//	cout << ans;
//	return 0;
//}

//#include<iostream>
//#include<string>
//using namespace std;
//int n, m;
//string strs[105];
//int main() {
//	ios::sync_with_stdio(false);
//	cin >> n >> m;
//	for (int i = 0; i < n; ++i) {
//		cin >> strs[i];
//		for (int j = 0; j < m; ++j) {
//			if (strs[i][j] == 'T' && strs[i][j + 1] == 'T') {
//				strs[i][j] = 'P';
//				strs[i][j + 1] = 'C';
//			}
//		}
//	}
//	for (int i = 0; i < n; ++i) {
//		cout << strs[i] << "\n";
//	}
//
//}


//#include<iostream>
//#include<cstring>
//using namespace std;
//char str[10];
//int flag1, flag2, flag3;
//int main() {
//	scanf("%s", str);
//	int i, l, r;
//	for (i = 0; i < 8; ++i) {
//		if (str[i] == 'R' && flag1) {
//			flag1 = 0;
//		}
//		else if (str[i] == 'R' && !flag1) {
//			flag1 = 1;
//		}
//		else if (str[i] == 'K' && flag1) {
//			flag2 = 1;
//		}
//		else if (str[i] == 'B' && flag3) {
//			r = i;
//		}
//		else if (str[i] == 'B' && !flag3) {
//			l = i;
//			flag3 = 1;
//		}
//
//	}
//	if (!flag2 || l % 2 == r % 2) {
//		cout << "No";
//		return 0;
//	}
//	cout << "Yes";
//	return 0;
//}
//#include<iostream>
//#include<algorithm>
//using namespace std;
//long long nums[105];
//long long n, d;
//int main() {
//	ios::sync_with_stdio(false);
//	cin >> n >> d;
//	cin >> nums[0];
//	for (int i = 1; i < n; ++i) {
//		cin >> nums[i];
//		if (nums[i] - nums[i - 1] <= d) { cout << nums[i] << "\n"; return 0; }
//	}
//	cout << -1 << "\n";
//	return 0;
//}