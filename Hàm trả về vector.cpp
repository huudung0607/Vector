#include <iostream>
#include <set>	
#include <map>
#include <algorithm>
#include <cmath>
#include <vector>
#include <numeric>
#include <iomanip>
using namespace std;

bool prime(int n)
{
	if (n < 2)
	{
		return false;
	}
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}
vector<int>prime_list(vector<int>v)
{
	vector<int> res;
	for (auto x : v)
	{
		if (prime(x))
		{
			res.push_back(x);
		}
	}
	return res;
}
void nhap(vector<int> &v ,int n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
}
int main()
{
	int n;
	cin >> n;
	vector<int> v(n);
	nhap(v,n);
	auto res = prime_list(v);
	for (auto x : res)
	{
		cout << x << " ";
	}
}
