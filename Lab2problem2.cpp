#include <iostream>
#include <cmath>
using namespace std;

int main()

{
    int x, y;
    cin >> x;

    y = x % 10 + (x % 100 - x % 10) / 10 + (x - x % 100) / 100;
    cout << y;
}
