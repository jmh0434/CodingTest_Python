#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> arr;

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    int start = 0;
    int end = 1e9;

    int result = 0;
    while(start <= end)
    {
        long long int total = 0;
        int mid = (start + end) / 2;
        
        for(int i = 0; i < n; i++)
        {
            // 잘랐을 때의 떡의 양 계산
            if(arr[i] > mid)
                total += arr[i] - mid;
        }
        if (total < m)
        {
            end = mid - 1;
        }
        else
        {
            result = mid;
            start = mid + 1;
        }
    }
    cout << result << '\n';
}