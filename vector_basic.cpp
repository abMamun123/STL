#include <bits/stdc++.h>
using namespace std;
int print(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
}
int input(vector<int> v, int size)
{
    int element;
    for (int i = 0; i < size; i++)
    {
        cin >> element;
        v.push_back(element);
    }
    print(v);
}
int main()
{
    vector<int> v;
    // int size;
    // cin >> size;
    // input(v, size);
    v.push_back(1);
    v.push_back(12);
    v.push_back(3);
    v.push_back(14);
    v.push_back(5);
    // print(v);
    cout << endl;
    // v.erase(v.begin()+2,v.end());
    // v.erase(v.begin()+2);
    // v.insert(v.begin()+1,5,3);
    // sort(v.begin(), v.end());
    // reverse(v.begin(), v.end());
    // ...iterator in vector
    // vector <int>:: iterator it;
    // it = v.begin()+3;
    // cout<<*it<<endl;
    // for(it=v.begin();it!=v.end();it++)
    // cout<<*it<<"";
    for (auto it : v)
        cout << it << " ";
    return 0;
}