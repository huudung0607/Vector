#include <iostream>
#include <set>	
#include <map>
#include <algorithm>
#include <cmath>
#include <vector>
#include <numeric>
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
	int maxnum = *(max_element(a.begin(), a.end()));
	int minnum = *(min_element(a.begin(), a.end()));
	int sum = accumulate(a.begin(), a.end(), 0);
	cout << minnum << endl << maxnum << endl << sum << endl;
}
