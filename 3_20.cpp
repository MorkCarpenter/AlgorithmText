﻿#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;
bool ok[2005];
double map[2005][2005];
double nodes[2005][2];
int n;
double l;
vector<int>que;
inline double ws(int x, int y, int z, int q) {
	return sqrt(pow((double)(x - z), 2) + pow((double)(y - q), 2));
}
int main() {
	ios::sync_with_stdio(false);
	cin >> n >> l;
	que.push_back(1);
	for (int i = 1; i <= n; ++i) {
		cin >> nodes[i][0] >> nodes[i][1];
	}

}