#include <bits/stdc++.h>
using namespace std;
int main()
{
    //pair<int, char> p;
    // cout << p.first << endl;
    // cout << p.second << endl;

    // cin >> p.first;
    // cin >> p.second;
    // cout << p.first << " ";
    // cout << p.second << endl;

    //Three ways of creating a pair

    // pair<int, char> PAIR1;
    // pair<string, double> PAIR2("GeeksForGeeks", 1.23);
    // pair<string, double> PAIR3;

    // PAIR1.first = 100;
    // PAIR1.second = 'G';

    // PAIR3 = make_pair("GeeksForGeeks is Best", 4.56);
    // pair<int, char> p;
    // p = make_pair(5, 'a');
    // pair<int, char> p2 = p;
    // p2 = make_pair(6, 'b');

    // if(p.first > p2.first)
    // cout<<" p > p2"<<endl;
    // else
    // cout<<" p2 > p"<<endl;

    pair<int,int> p1(6,6);
    pair<int,int> p2(6,5);

    if(p1 > p2)
    cout<<"true"<<endl;
    else
    cout<<"False"<<endl;


    return 0;
}