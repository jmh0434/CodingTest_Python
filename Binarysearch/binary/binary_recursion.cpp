#include <bits/stdc++.h>
using namespace std;

int binary_search(vector<int> &array, int target, int start, int end)
{
    if (start > end)
        return -1;
    int mid = (start + end) / 2;

    if (array[mid] == target)
        return mid;
    else if (array[mid] > target)
        return binary_search(array, target, start, mid - 1);
    else
        return binary_search(array, target, mid + 1, end);
}
int n, target;
vector<int> arr;
int main()
{
    
    cin >> n >> target;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    int result = binary_search(arr, target, 0, n - 1);

    if (result == -1)
        cout << "원소가 존재하지 않습니다." << endl;
    else
        cout << result + 1 << endl;
}