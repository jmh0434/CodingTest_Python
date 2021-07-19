#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> a;
vector<int> b;

bool compare(int x, int y)
{
    return x > y;
}

int main()
{
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        int data;
        cin >> data;
        a.push_back(data);
    }

    for (int i = 0; i < n; i++)
    {
        int data;
        cin >> data;
        b.push_back(data);
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), compare);

    for (int i = 0; i < k; i++)
    {
        if (a[i] < b[i])
            swap(a[i], b[i]);
        else
            break;
    }

    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }

    cout << sum;
}