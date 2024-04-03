#define _CRT_SECURE_NO_WARNINGS 1
//A

//#include<iostream>
//#include<cstring>
//using namespace std;
//
//string in;
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin >> in;
//	int len = in.length();
//	for (int i = 0; i < len; i += 2) {
//		swap(in[i], in[i + 1]);
//	}
//	cout << in;
//	return 0;
//}


//B
//#include<iostream>
//using namespace std;
//int line[200005];
//bool line_ok[200005];
//int n, ans;
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin >> n;
//	for (int i = 1; i <= n; ++i)cin >> line[i];
//	for (int i = 1; i <= n; ++i) {
//		if (!line_ok[line[i]]&& !line_ok[i]) {
//			line_ok[line[i]] = true;
//			++ans;
//		}
//	}
//	cout << n - ans << endl;
//	for (int i = 1; i <= n; ++i) {
//		if (!line_ok[i]) {
//			cout << i << " ";
//		}
//	}
//	return 0;
//}

//C
//#include<iostream>
//#include<bitset>
//using namespace std;
//int map[11][11];
//int n, m, ans;
//bitset<1000000005>flag;
//void dfs(int x, int y) {
//	if (x > n || y > m)return;
//	if (flag[map[x][y]] == 1)return;
//	if (x == n && y == m) {
//		++ans;
//		return;
//	}
//
//	flag[map[x][y]] = 1;
//	dfs(x + 1, y);
//	dfs(x, y + 1);
//	flag[map[x][y]] = 0;
//}
//int main() {
//	ios::sync_with_stdio(false);
//	cin >> n >> m;
//	for (int i = 1; i <= n; ++i) {
//		for (int j = 1; j <= m; ++j) {
//			cin >> map[i][j];
//		}
//	}
//	dfs(1, 1);
//	cout << ans << endl;
//	return 0;
//}

//D
