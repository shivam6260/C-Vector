#include <bits/stdc++.h>
using namespace std;

int comparable(pair<int,int> &a,pair<int,int> &b)
{
    return a.first < b.first;
}

void basic_learning()
{
    unordered_map<int, vector<pair<int, int>>> mp;
    mp[1].push_back(make_pair(101, 111));
    mp[1].push_back(make_pair(102, 122));
    mp[1].push_back(make_pair(103, 133));
    mp[2].push_back(make_pair(104, 144));
    mp[2].push_back(make_pair(105, 155));
    mp[2].push_back(make_pair(106, 166));

    for(auto it : mp)
    {
        cout<<it.first<<endl;
        sort(it.second.begin(),it.second.end(),comparable);
        for(int i=0;i<it.second.size();i++)
        {
            cout << it.second[i].first << " " << it.second[i].second<<endl;

        }
    
    }
}

int main()
{
    basic_learning();
}