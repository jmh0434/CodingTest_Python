#include <bits/stdc++.h>
using namespace std;

int n, m, k;
vector<int> v;

int main()
{
    int result = 0;
    cin >> n >> m >> k;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    int first = v[n - 1];
    int second = v[n - 2];

    while (m > 0)
    {
        for (int i = 0; i < k; i++)
        {
            if (m == 0)
                break;
            result = result + first;
            m--;
        }
        if (m == 0)
            break;
        result = result + second;
        m--;
    }

    cout << result;

    return 0;
}