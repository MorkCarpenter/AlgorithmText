//p8186
#include<iostream>
#include<vector>
using namespace std;

bool ok[510][510];
vector<int>list[510];
int n;
int flag;

int main() {
	int a;
	ios::sync_with_stdio(false);
	cin >> n;
	
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			cin >> a;
			if (a == i) {
				for (++j; j <= n; ++j)
					cin >> a;
				break;
			}
			ok[i][a] = true;
			list[i].push_back(a);
		}
	}
	for (int k = 1; k <= n; ++k) {
		for (int i = 1; i <= n; ++i) {
			for (int j = 1; j <= n; ++j) {
				ok[i][j] |= (ok[i][k] & ok[k][j]);
			}
		}
	}
	for (int i = 1; i <= n; ++i) {
		flag = 0;
		for (int j = 0; j < list[i].size(); ++j) {
			if (ok[list[i][j]][i]) {
				cout << list[i][j] << endl;
				flag = 1;
				break;
			}
		}
		if (!flag)cout << i << endl;
	}
	return 0;
}







