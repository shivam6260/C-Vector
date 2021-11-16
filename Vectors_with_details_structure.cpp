#include <bits/stdc++.h>
using namespace std;

int comparable(int a, int b)
{
    return a > b;
}

struct vov
{
    int x;
    int y;
    vector<int> vec;

    void sorting()
    {
        sort(vec.begin(), vec.end(), comparable);
    }
};

int main()
{
    vector<vov> v;
    struct vov v1;
    v1.x = 1000;
    v1.y = 5000;
    for (int i = 100; i <= 105; i++)
    {
        v1.vec.push_back(i);
    }
    v.push_back(v1);

    cout << v[0].x << endl;
    cout << v[0].y << endl;
    //sort(v[0].vec.begin(), v[0].vec.end(), comparable);
    v[0].sorting();
    for (int i = 0; i < v[0].vec.size(); i++)
        cout << v[0].vec[i] << " ";
    cout << endl;
}