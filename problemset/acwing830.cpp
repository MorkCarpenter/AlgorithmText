#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<algorithm>

int stk[100005], top;
int nums[100005];
int n;
int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; ++i) {
		scanf("%d", &nums[i]);
		if (!top) {
			stk[++top] = nums[i];
			printf("-1 ");
		}
		else {
			while (top) {
				if (stk[top] < nums[i]) {
					printf("%d ", stk[top]);
					stk[++top] = nums[i];
					break;
				}
				--top;
			}
			if (!top) {
				stk[++top] = nums[i];
				printf("-1 ");
			}
		}
	}
	return 0;
}

//ABC300

//int main() {
//	int a = 2, b = 3;
//	funcadapter myadapter;
//	myadapter.setFunc(new ADD);
//	std::cout << myadapter.Add(a, b);
//	myadapter.setFunc(new class akas : public ADD {
//		int operator ()(int a, int b) { return a - b; };
//	}*func);
//}

//#include<iostream>
//
//using namespace std;
//char map[105][105];
//long long n;
//bool isPrime[100000010];
//long long Prime[6000010], cnt = 0;
//long long ans, m;
//inline void GetPrime(int n)//筛到n
//{
//	isPrime[1] = 1;
//
//	for (int i = 2; i <= n; i++)
//	{
//		if (!isPrime[i])
//			Prime[++cnt] = i;
//
//		for (int j = 1; j <= cnt && i * Prime[j] <= n; j++) {
//
//			isPrime[i * Prime[j]] = 1;
//
//			if (i % Prime[j] == 0)
//				break;
//		}
//	}
//}
//int main() {
//	GetPrime(100000010);
//	scanf("%lld", &n);
//	for (int i = 1; i < cnt - 1; ++i) {
//		m = Prime[i] * Prime[i];
//		for (int j = i + 1; j < cnt; ++j) {
//			for (int k = j + 1; k <= cnt; ++k) {
//				if (m * Prime[j] * Prime[k] * Prime[k] <= n)++ans;
//			}
//		}
//	}
//	printf("%lld", ans);
//	return 0;
//}

//char map1[70][70], map2[70][70];
//int nums1, nums2;
//int m, n;
//bool solve(int x, int y) {
//	for (int i = 1; i <= n; ++i) {
//		for (int j = 1; j <= m; ++j) {
//			if (map1[i][j] != map2[i + x - 1][j + y - 1])return false;
//		}
//	}
//	return true;
//}
//int main() {
//	ios::sync_with_stdio(false);
//	cin >> n >> m;
//	for (int i = 1; i <= n; ++i) {
//		for (int j = 1; j <= m; ++j) {
//			cin >> map1[i][j];
//		}
//	}
//	for (int i = 1; i <= n; ++i) {
//		for (int j = 1; j <= m; ++j) {
//			cin >> map2[i][j];
//			map2[n + i][j] = map2[i][j + m] = map2[i + n][j + m] = map2[i][j];
//		}
//	}
//	for (int i = 1; i <= n; ++i) {
//		for (int j = 1; j <= m; ++j) {
//			if (map1[1][1] == map2[i][j]) {
//				if (solve(i, j)) {
//					cout << "Yes";
//					return 0;
//				}
//			}
//		}
//	}
//	cout << "No";
//	return 0;
//}

//int ans[2005], n, a, b;
//int main() {
//	ios::sync_with_stdio(false);
//	cin >> n >> a >> b;
//	for (int i = 1; i <= n; ++i) {
//		int in;
//		cin >> in;
//		ans[in] = i;
//	}
//	cout << ans[a + b];
//}

