#include <iostream>
#include <set>	
#include <map>
#include <algorithm>
#include <cmath>
#include <vector>
#include <numeric>
#include <iomanip>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<pair<int, int>> v;
	for (int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;
		v.push_back({ x,y });
	}
	vector<double> res;
	for (int i = 0; i < n; i++)
	{
		double ans = sqrt(v[i].first * v[i].first + v[i].second * v[i].second);
		res.push_back(ans);
	}
	for (int i = 0; i < n; i++)
	{
		cout << fixed << setprecision(2) << res[i] << " ";
	}
}
