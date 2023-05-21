#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;
void dfs() {
	char in;
	cin >> in;
	if (in >= 'a' && in <= 'z') {
		dfs();
		cout << in << " ";
		dfs();
	}

}
int main() {
	ios::sync_with_stdio(false);
	dfs();
	return 0;
}