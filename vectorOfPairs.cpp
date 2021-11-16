#include <bits/stdc++.h>
using namespace std;

int comparable(pair<int, int> &a, pair<int, int> &b)
{
    if (a.first * a.first + a.second * a.second == b.first * b.first + b.second * b.second)
    {
        return a.first < b.first;
    }
    return a.first * a.first + a.second * a.second < b.first * b.first + b.second * b.second;
}

int comparable2(pair<int, int> &a, pair<int, int> &b)
{
    if (a.first == b.first)
        return a.second > b.second;
    return a.first < b.first;
}

void sorting_with_my_inbuilt_comparablefunction()
{
    vector<pair<int, int>> v;
    vector<int> v1 = {18, 50, 4, 8, 98, 50};
    vector<int> v2 = {10, 20, 3, 45, 36, 77};

    for (int i = 0; i < v1.size(); i++)
        v.push_back(make_pair(v1[i], v2[i]));
    sort(v.begin(), v.end(), comparable2);

    for (int i = 0; i < v.size(); i++)
        cout << v[i].first << " " << v[i].second << endl;
}

int main()
{
    sorting_with_my_inbuilt_comparablefunction();
    // vector<pair<int, int>> v;
    // vector<int> v1 = {1,3,4,2,5};
    // vector<int> v2 = {10,6,9,7,8};

    // for (int i = 0; i < v1.size(); i++)
    //     v.push_back(make_pair(v1[i], v2[i]));

    // Jo tumhara inbuilt sort hai wo pair ko v.first kai hisab sai sort karta
    // sort(v.begin(), v.end());
    // sort(v.rbegin(), v.rend());

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i].first << " " << v[i].second << endl;
    // }
}