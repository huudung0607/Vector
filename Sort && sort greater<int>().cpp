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
	sort(a.begin(), a.end());
	for (vector<int>::iterator it = a.begin(); it != a.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	sort(a.begin(), a.end(), greater<int>());
	for (vector<int>::iterator it = a.begin(); it != a.end(); it++)
	{
		cout << *it << " ";
	}

}
