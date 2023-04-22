#define _CRT_SECURE_NO_WARNINGS 1

//#include<iostream>
//#include<set>
//#include<array>
//#include<algorithm>
//using namespace std;
//array< multiset<long long>, 200005>list;
//array< multiset<long long>, 200005>nums;
//int n, m;
//int a, b, c;
//int main() {
//	ios::sync_with_stdio(false);
//	cin >> n >> m;
//	while (m--) {
//		cin >> a;
//		if (a == 1) {
//			cin >> b >> c;
//			list[c].insert(b);
//			nums[b].insert(c);
//		}
//		else if (a == 2) {
//			cin >> b;
//			for (auto i : list[b]) {
//				cout << i << " ";
//			}
//			cout << "\n";
//		}
//		else if (a == 3) {
//			cin >> b;
//			for (auto i : nums[b]) {
//				cout << i << " ";
//			}
//			cout << "\n";
//		}
//	}
//	return 0;
//}


#include<iostream>
#include<algorithm>
using namespace std;
bool map1[105][105];
bool map2[105][105];
bool map3[105][105];
bool map4[105][105];
bool map5[105][105];
int n;
int in;
int main() {
	ios::sync_with_stdio(false);
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			cin >> map1[i][j];
		}
	}
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			cin >> in;
			if (in == 1) {
				map3[i][j] = map4[j][i] = map5[n - i + 1][j] = map2[i][n - j + 1] = true;
			}
		}
	}
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			if (map1[i][j] && !map2[i][j]) {
				goto f2;
			}
		}
	}
	cout << "Yes";
	return 0;
f2:
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			if (map1[i][j] && !map3[i][j]) {
				goto f3;
			}
		}
	}
	cout << "Yes";
	return 0;
f3:

	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			if (map1[i][j] && !map4[i][j]) {
				goto f4;
			}
		}
	}
	cout << "Yes";
	return 0;
f4:

	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			if (map1[i][j] && !map5[i][j]) {
				cout << "No";
				return 0;
			}
		}
	}
	cout << "Yes";
	return 0;
}