#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<algorithm>
using namespace std;

int n, m;
int v, k;
int dp[10005];

int main() {
	ios::sync_with_stdio(false);
	cin >> n >> m;
	for (int i = 0; i < n; ++i) {
		cin >> v >> k;
		for (int j = m; j >= v; --j) {
			dp[j] = max(j[dp], dp[j - v] + k);
		}
	}
	cout << m[dp] << endl;
	return 0;
}