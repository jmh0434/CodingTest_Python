#include <bits/stdc++.h>
using namespace std;

class Fruit {
public:
    string name;
    int index;
    Fruit(string name, int index){
        this->name = name;
        this->index = index;
    }
    bool operator <(Fruit &other) // 정렬 기준은 점수가 낮은 순서
    {
        return this -> index < other.index;
    }
};

int main(void)
{
    int n = 3;
    Fruit fruits[] = {
        Fruit("바나나", 2),
        Fruit("사과", 5),
        Fruit("당근", 3)
    };
    sort(fruits, fruits + n);
    
    for(int i = 0; i < n; i++)
        cout << '(' << fruits[i].name << ',' << fruits[i].index << ')' << ' ';
}