#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<string>

using namespace std;

int n, m;
int check[9] = { 0, };
vector<int> v;
void solution(int index, int x) {
	if (x == m) {
		for (int i = 0; i < m; i++) {
			cout << v[i] << ' ';
		}
		cout << '\n';
		return;
	}
	//중복을 없애기 위해
	for (int i = 1 + index; i <= n; i++) {
		if (!check[i]) {
			check[i] = 1;
			v.push_back(i);
			solution(i, x + 1);
			check[i] = 0;
			v.pop_back();
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;

	solution(0, 0);

	return 0;
}