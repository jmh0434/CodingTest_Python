#include <bits/stdc++.h>
using namespace std;

stack<int> s;

int main()
{
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.pop();

    while (!s.empty())
    {
        cout<<s.top()<<' ';
        s.pop();
    }
}