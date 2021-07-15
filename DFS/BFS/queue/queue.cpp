#include <bits/stdc++.h>
using namespace std;

queue<int> q;

int main()
{
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.pop();

    while (!q.empty())
    {
        cout << q.front() << ' ';
        q.pop();
    }
}