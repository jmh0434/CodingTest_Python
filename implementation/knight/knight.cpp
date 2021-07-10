#include <bits/stdc++.h>
using namespace std;

string inputData;

int dx[8] = {-2, -1, 1, 2, -2, -1, 1, 2};
int dy[8] = {-1, -2, -2, -1, 1, 2, 2, 1};

int main() {
    cin >> inputData;
    int row = inputData[1] - '0';
    int column = inputData[0] - 'a' + 1;
    int count = 0;

    for (int i = 0; i < 8; i++) {
        int nextRow = row + dx[i];
        int nextColumn = column + dy[i];
        if (nextRow >= 1 && nextRow <= 8 && nextColumn >= 1 && nextColumn <= 8) {
            count++;
        }
    }
    cout << count;
    return 0;
}
