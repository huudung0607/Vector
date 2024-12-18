#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void nhap(vector<vector<int>>& v, int n, int m) {
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> v[i][j];
		}
	}
}
void xuat(vector<vector<int>> v, int n, int m) {
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << v[i][j] << " ";
		}
		cout << endl;
	}
}
void lat(vector<vector<int>>& v, int n, int m) {
	for (int i = 0; i < n; i++)
	{
		reverse(v[i].begin(), v[i].end());
	}
}

int main()
{
	int n, m;
	cin >> n >> m;
	vector<vector<int>> v(n, vector<int>(m));
	nhap(v, n, m);
	cout << endl;
	lat(v, n, m);
	xuat(v, n, m);
}
