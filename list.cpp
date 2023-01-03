#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> li;
    li.push_back(5);
    li.push_back(10);
    li.push_back(15);
    li.push_back(20);
    li.push_back(25);
    li.push_front(50);
    for (auto it : li)
        cout << it << " ";
        cout<<endl;
    list<int>::iterator it;
    it = li.begin();
    advance(it,3);    
    li.insert(it,9);

    for (auto it : li)
        cout << it << " ";
}