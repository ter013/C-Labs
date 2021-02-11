#include <iostream>
#include <cmath>
using namespace std;

int main()

{
    int x, n;
    int i = 2;
    cin >> x;
    n = x;
    while (i < n + 1){
        if (x % i == 0){
            cout << i;
            x = x / i;
        }
        else{
            i++;
        }
    }
}
