#include <iostream>
using namespace std;

int n = 1260;
int count = 0;

int coinTypes[4] = {500, 100, 50, 10};

int main()
{
    for (int i = 0; i < 4; i++)
    {
        int coin = coinTypes[i];
        count = count + (n / coin);
        n = n % coin;
    }
    cout << count << endl;
    return 0;
}