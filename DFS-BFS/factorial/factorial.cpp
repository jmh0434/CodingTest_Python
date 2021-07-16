#include <bits/stdc++.h>
using namespace std;

int factorial_recursive(int n)
{
    if (n <= 1)
        return 1;
    return n * factorial_recursive(n - 1);
}

int main()
{
    cout << factorial_recursive(5);
}