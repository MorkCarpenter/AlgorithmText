#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int x[300005], S[300005];
typedef pair<int, int> PII;
vector<int>alls;
vector<PII>add, point;
int afind(int x) {
	int r = alls.size() - 1, l = 0;
	while (l < r) {
		int mid = (l + r) >> 1;
		if (alls[mid] >= x) {
			r = mid;
		}
		else {
			l = mid + 1;
		}
	}
	return l + 1;
}
int n, m;
int a, b;

int main() {
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; ++i) {
		scanf("%d %d", &a, &b);
		add.push_back({ a,b });
		alls.push_back(a);
	}
	for (int i = 0; i < m; ++i) {
		scanf("%d %d", &a, &b);
		point.push_back({ a,b });
		alls.push_back(a);
		alls.push_back(b);
	}
	sort(alls.begin(), alls.end());
	alls.erase(unique(alls.begin(), alls.end()), alls.end());
	for (auto item : add) {
		a = afind(item.first);
		x[a] += item.second;
	}
	for (int i = 1; i <= alls.size(); ++i) {
		S[i] += S[i - 1] + x[i];
	}
	for (auto item : point) {
		a = afind(item.first), b = afind(item.second);
		printf("%d ", S[b] - S[a - 1]);
	}
	return 0;
}