#include <iostream>
#include <vector>
using namespace std;

void nhap(vector<int> &v, int n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
}
void in(vector<int> v, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << v[i] << " ";
	}
}
void rev(vector<int> &v, int n)
{
	for (vector<int>::reverse_iterator it = v.rbegin(); it!= v.rend();it++)
	{
		cout << *it << " ";
	}
}
int main()
{
	int n;
	cin >> n;
	vector<int> v(n);
	nhap(v, n);
	rev(v, n);
}
