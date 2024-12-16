#include <iostream>
#include <set>	
#include <map>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int l, r;
	cin >> l >> r;
	reverse(a.begin(), a.end());
	for (auto x : a)
	{
		cout << x << " ";
	}
	cout << endl;
	reverse(a.begin() + l, a.begin() + r + 1);
	for (auto y : a)
	{
		cout << y<< " ";
	}
}
