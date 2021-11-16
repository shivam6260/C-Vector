#include <bits/stdc++.h>
using namespace std;

void simpleVector()
{
    vector<int> v;
    cout << v.size() << endl; // output = 0
    v.push_back(5);
    v.push_back(10);
    v.push_back(11);
    cout << v.size() << endl; // output = 3
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << endl; // 5 10 11

    for (int i = v.size() - 1; i >= 0; i--)
        cout << v[i] << endl; // 11 10 5
}

void vector_1D_With_Predefined_Size_and_Value()
{
    vector<int> v(5, -3);
    cout << v.size() << endl; // Output = 5
    v.pop_back();
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
}

void vector_Inbuilt_Function()
{
    vector<int> v(3);
    v.push_back(10);
    v.push_back(20);
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " "; //Output = 0 0 0 10 20

    cout << endl;
    vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.pop_back();

    cout << vec.front() << endl;
    cout << vec.back() << endl;

    for (int i = 0; i < vec.size(); i++)
        cout << vec[i] << " "; //Output = 10 20
}

void vector_Sorting()
{
    vector<int> v;
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(7);
    v.push_back(9);
    sort(v.rbegin(), v.rend()); // Output = 9 8 7 6 5
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
}

// How to Sort a vector using Structure
struct MyStruct
{
    int distance;
    int x;
    int y;
    MyStruct(int xx, int yy)
    {
        x = xx;
        y = yy;
        distance = x * x + y * y;
    }
};

struct sorting_Using_Distance
{
    inline bool operator()(const MyStruct &struct1, const MyStruct &struct2)
    {
        if (struct1.distance == struct2.distance)
            return struct1.x < struct2.x;

        return (struct1.distance < struct2.distance);
    }
};

void sorting_Vector_Using_Structure()
{
    vector<MyStruct> vec;

    vec.push_back(MyStruct(4, 3));
    vec.push_back(MyStruct(3, 4));
    vec.push_back(MyStruct(1, 2));
    vec.push_back(MyStruct(5, 5));

    sort(vec.begin(), vec.end(), sorting_Using_Distance());
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i].distance << " " << vec[i].x << " " << vec[i].y << endl;
    }
}

// Sort a vector using manually built in comparable functions
int comparable(int a, int b)
{
    return a < b;
}
int comparable2(int a, int b)
{
    if(a*a ==  b*b)
    return a > b;
    return (a*a > b*b);
}
void sorting_Using_manual_Comparable()
{
    vector<int> v;
    v.push_back(3);
    v.push_back(2);
    v.push_back(-2);
    v.push_back(-4);
    v.push_back(5);
    // for (int i = 1; i < 10; i++)
    //     v.push_back(i + 2);
    sort(v.begin(), v.end(), comparable2);
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
}

int main()
{
    //simpleVector();
    //vector_1D_With_Predefined_Size_and_Value();
    //vector_Inbuilt_Function();
    //vector_Sorting();
    //sorting_Vector_Using_Structure();
    sorting_Using_manual_Comparable();
}
