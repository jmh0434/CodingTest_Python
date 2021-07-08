#include <bits/stdc++.h>

using namespace std;

int n, m;
int result;

int main()
{
    // N, M을 공백을 기준으로 구분하여 입력 받기
    cin >> n >> m;

    // 한 줄씩 입력 받아 확인하기
    for (int i = 0; i < n; i++)
    {
        int min_data = 10001;
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            min_data = min(min_data, x);
        }
        result = max(result, min_data);
    }
    return 0;
}