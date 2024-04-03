#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<algorithm>
using namespace std;
struct node {
	int sign;
	int a, sum;
}nodes[305];
int n, b;
bool cmp(node a, node b) {
	if (a.sum > b.sum)return true;
	if (a.a > b.a && a.sum == b.sum)return true;
	if (a.sum == b.sum && a.a == b.a && a.sign < b.sign)return true;
	return false;

}
int main() {
	ios::sync_with_stdio(false);
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		nodes[i].sign = i;
		cin >> nodes[i].a;
		cin >> b;
		nodes[i].sum += b;
		cin >> b;
		nodes[i].sum += b;
		nodes[i].sum += nodes[i].a;
	}
	sort(nodes + 1, nodes + n + 1, cmp);
	for (int i = 1; i <= 5; ++i) {
		cout << nodes[i].sign << " " << nodes[i].sum << "\n";
	}
	return 0;
}