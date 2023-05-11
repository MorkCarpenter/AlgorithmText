#include<iostream>
using namespace std;

//B
//int dp[40][20];
//int main() {
//	int ans = 0;
//	dp[0][0] = 1;
//	for (int i = 1; i <= 30; i++) {
//		for (int j = 0; j <= 10; ++j) {
//			if (j != 10)
//				dp[i][0] += dp[i - 1][j];
//			if (j != 0) {
//				dp[i][j] += dp[i - 1][j - 1];
//			}
//			if (j == 7) {
//				ans += dp[i][j];
//			}
//		}
//	}
//}
// //B
//int ans = 0;
//void dfs(int c, int s) {
//	if (s == 70)ans++;
//	if (c == 31 || s == 100)return;
//	dfs(c + 1, s + 10);
//	dfs(c + 1, 0);
//}
//int main() {
//	ans = 0;
//	dfs(1, 0);
//	cout << ans;
//	return 0;
//}
//int num(int x) {
//	int len = 0;
//	while (x) {
//		x /= 10;
//		len++;
//	}
//	return len;
//}
//
//bool ok(int x) {
//	int flag = 0;
//	int len = num(x);
//	int n1 = 0, n2 = 0;
//	while (flag < len / 2) {
//		n1 += x % 10;
//		x /= 10;
//		flag++;
//	}
//	while (flag < len) {
//		n2 += x % 10;
//		x /= 10;
//		flag++;
//	}
//	if (n1 == n2)return true;
//	else return false;
//}
//
//int main() {
//	int ans = 0;
//	for (int i = 10; i <= 1e8; ++i) {
//		if (num(i) % 2 == 0) {
//			if (ok(i))ans++;
//		}
//	}
//	cout << ans;
//}



//#include<iostream>
//using namespace std;
//
//long long A,B,K;
//int ans;
//int main(){
//	cin>>A>>B>>K;
//	while(A<B){
//		A*=K;
//		++ans;
//	}
//	cout<<ans;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//long long ans, sum, asum, depth;
//int map[12][12];
//bool flag[12][12];
//int n, m;
//
//void dfs(int x, int y) {
//	if (flag[x][y])return;
//	if (x<1 || x>n || y<1 || y>m || asum > sum / 2||depth > ans)return;
//	if (asum == sum / 2) {
//		ans = ans >= depth ? depth : ans;
//	}
//	asum += map[x][y];
//	flag[x][y] = true;
//	++depth;
//	dfs(x -1, y);
//	dfs(x, y - 1);
//	dfs(x + 1, y);
//	dfs(x, y+1);
//	asum -= map[x][y];
//	flag[x][y] = false;
//	--depth;
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin >> m >> n;
//	for (int i = 1; i <= n; ++i) {
//		for (int j = 1; j <= m; ++j) {
//			cin >> map[i][j];
//			sum += map[i][j];
//		}
//	}
//	ans = 105;
//	dfs(1, 1);
//	cout << ans << endl;
//	return 0;
//}
