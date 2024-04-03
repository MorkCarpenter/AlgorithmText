#include<iostream>
#include <set>
#include <algorithm>

using namespace std;
struct node {
	long long p;
	int c;
	long long num[210];
	bool ok[210] = { 0 };
}nodes[210];
bool cmp(node a, node b) {
	return a.p >= b.p;
}
int tmp;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; ++i) {
		cin >> nodes[i].p >> nodes[i].c;
		for (int k = 0; k < nodes[i].c; ++k) {
			cin>>nodes[i].num[k];
			nodes[i].ok[nodes[i].num[k]] = true;
		}
	}
	sort(nodes + 1, nodes + 1 + n, cmp);
	for (int i = 1; i <= n; ++i) {
		for (int j = i + 1; j <= n; ++j) {
			if (nodes[j].c >= nodes[i].c) {
				if (nodes[j].p < nodes[i].p) {
					for (int k=0;k<nodes[i].c;++k) {
						if (!nodes[j].ok[nodes[i].num[k]]) {
							goto nextc;
						}
					}
					cout << "Yes" << "\n";
					return 0;
				}
				else if (nodes[j].c > nodes[i].c) {
					for (int k=0;k<nodes[i].c;++k) {
						if (!nodes[j].ok[nodes[i].num[k]]) {
							goto nextc;
						}
					}
					cout << "Yes" << "\n";
					return 0;
				}
			}
		nextc:;
		}
	}
	cout << "No" << "\n";

}