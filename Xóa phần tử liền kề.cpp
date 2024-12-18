#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

vector<int> unique_vector(vector<int> v) {
    vector<int> temp;
    temp.push_back(v[0]);
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i - 1] != v[i])
        {
            temp.push_back(v[i]);
        }
    }
    return temp;
}

vector<int> nhap() {
    int n;
    cin >> n;
    vector <int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    return v;
}

void in(vector<int> v) {
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}
int main() {
    vector<int> v = nhap();
    vector<int> res = unique_vector(v);
    in(res);
}
