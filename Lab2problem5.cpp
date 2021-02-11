#include <iostream>
#include <cmath>
using namespace std;

int main()

{
    int n;
    int a, b, c, d;
    cin >> n;

    a = int(sqrt(n));
    b = int(sqrt(n - a * a));
    c = int(sqrt(n - a * a - b * b));
    d = int(sqrt(n - a * a - b * b - c * c));
    cout << d << endl << c << endl<< b << endl<< a;
}
