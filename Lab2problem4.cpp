#include <iostream>
#include <cmath>
using namespace std;

int prime(int n)
{
    int x = 1;
    int k = 0;
    int i = 0;
    while (i < n){
        x++;
        for (int j = 2; j < x + 1; j++){
            if (x % j == 0){
                k++;
            }
        }
        if (k == 1){
            i++;
        }
        k = 0;
    }
    cout << x;
}

int main()
{
    int n;
    cin >> n;
    prime(n);
}
