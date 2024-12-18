#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

vector<char> nhap() {
    vector<char> v;
    char text;
    while (cin >> text)
    {
        v.push_back(text);
    }
    return v;
}

vector<char> thaydoi(vector<char> v) {
    vector<char>res;
    for (auto text : v)
    {
        if (text >= 'A' && text <= 'Z')
        {
            text += 32;
            res.push_back(text);
        }
        else if (text >= 'a' && text <= 'z')
        {
            text -= 32;
            res.push_back(text);
        }
        else
        {
            res.push_back(text);
        }
    }
    return res;
}

void in(vector<char> v) {
    for (auto text : v)
    {
        cout << text << " ";
    }
}
int main() {
    vector<char> v = nhap();
    vector<char> res = thaydoi(v);
    in(res);
}
