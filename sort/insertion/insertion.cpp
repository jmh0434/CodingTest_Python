#include <bits/stdc++.h>
using namespace std;

int n = 10;
int arr[] = {7, 5, 9, 0, 3, 1, 6, 2, 4, 8};

int main()
{
    for(int i = 1; i < n; i++)
    {
        for(int j = i; j > 0; j--)
        {
            if(arr[j] < arr[j - 1])
                swap(arr[j], arr[j - 1]);
            else
                break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
        
    }
}