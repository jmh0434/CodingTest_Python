#include <bits/stdc++.h>
using namespace std;

int binary_search(vector<int> &array, int target, int start, int end)
{
    while(start <= end)
    {
        int mid = (start + end) / 2;
        
        if(array[mid] == target)
            return mid;
        else if (array[mid] > target)
        {
            end = mid - 1;
        }
        else
            start = mid + 1;
    }
    return -1;
}
int n, m;
vector<int> arr;
vector<int> x;
int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        arr.push_back(k);
    }
    sort(arr.begin(), arr.end());

    cin >> m;
    for(int i = 0; i < m; i++)
    {
        int k;
        cin >> k;
        x.push_back(k);
    }

    for(int i = 0; i < m; i++)
    {
        int result = binary_search(arr, x[i], 0, n - 1);
        if(result != -1)
        {
            cout<<"yes"<<' ';
        }
        else
            cout<<"no"<<' ';
    }
}