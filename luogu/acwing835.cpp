#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

int trie[100005][32];
int idx;
int cnt[100005];
int n;
char in[100005], k;
int main() {
	scanf("%d", &n);
	while (n--) {
		scanf(" %c %s", &k, in);
		if (k == 'I') {
			int p = 0;
			for (int i = 0; in[i]; ++i) {
				int tmp = in[i] - 'a';
				if (!trie[p][tmp]) {
					trie[p][tmp] = ++idx;
				}
				p = trie[p][tmp];
			}
			++cnt[p];
		}
		else {
			int p = 0;
			for (int i = 0; in[i]; ++i) {
				int tmp = in[i] - 'a';
				if (!trie[p][tmp]) { p = 0; break; }
				p = trie[p][tmp];
			}
			printf("%d\n", cnt[p]);
		}
	}
	return 0;
}