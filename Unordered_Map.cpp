#include <bits/stdc++.h>
using namespace std;

// We can not sort the map or unordered map directly
// we have to use either pairs of vectors or set

int comparable(pair<int ,int > &a, pair<int,int> &b)
{
    if(a.second == b.second)
    return a.first < b.first;
    return a.second > b.second;
}

void sorting_the_unordered_map()
{
    unordered_map<int, int> mp;
    mp[1] = 111;
    mp[3] = 103;
    mp[4] = 111;
    mp[2] = 102;
    mp[5] = 105;

    vector<pair<int,int>> vec;
    for (auto it : mp)
    {
        vec.push_back(make_pair(it.first,it.second));
    }
    sort(vec.begin(),vec.end(),comparable);
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i].first<<" "<<vec[i].second<<endl;
    }

    // for (auto it : mp)
    // {
    //     cout << it.first << " " << it.second << endl;
    // }
}

void basic_learning()
{
    unordered_map<int, int> mp;

    mp[2] = 100;
    mp[3] = 110;

    int key = 2;
    if (mp.find(key) == mp.end())
        cout << key << " not found\n\n";
    else
        cout << "Found " << mp[key] << "\n";

    for (auto itr : mp)
    {
        itr.second = itr.second + 100;
        cout << itr.first << " " << itr.second << endl;
    }
}

int main()
{
    //basic_learning();
    sorting_the_unordered_map();
}