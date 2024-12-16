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
	for (auto it = a.begin() + l; it != a.begin() + r + 1; it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	for (auto it = a.begin() + r; it >= a.begin() + l; it--)
	{
		cout << *it << " ";
	}
}
