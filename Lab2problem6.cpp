#include <iostream>
#include <cmath>
using namespace std;

int main()

{
    int n = 0;
    int k = 0;
    int j = 1;
    int t;

    while (j != 0){
        cin >> t;
        j = t;
        if (t == n){
            k++;
        }
        if (t > n){
            n = t;
            k = 1;
        }

    }
    cout << n << endl << k;
}
