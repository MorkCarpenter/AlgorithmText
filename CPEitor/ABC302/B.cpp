#include<iostream>
using namespace std;
char map[200][200];
int ans[10][2];
int op[8][2] = { {1,0},{1,1},{0,1},{-1,1 }, {-1,0},{-1,-1},{0,-1},{1,-1} };
char ok[10] = "snuke";
int n, m;
int main() {
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; ++i) {
		getchar();
		for (int j = 1; j <= m; ++j) {
			scanf("%c", &map[i][j]);
		}

	}
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= m; ++j) {
			if (map[i][j] == 's') {
				ans[0][0] = i;
				ans[0][1] = j;
				for (int o = 0; o < 8; ++o) {
					for (int k = 1; k <= 5; ++k) {
						if (k == 5) {
							for (int aa = 0; aa < 5; ++aa) {
								printf("%d %d\n", ans[aa][0], ans[aa][1]);

							}
							return 0;
						}
						if (map[i + op[o][0] * k][j + op[o][1] * k] == ok[k]) {
							ans[k][0] = i + op[o][0] * k;
							ans[k][1] = j + op[o][1] * k;
							continue;
						}
						else break;
					}
				}
			}
		}
	}
}