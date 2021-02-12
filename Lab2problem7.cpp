#include <iostream>
#include <cmath>
using namespace std;

int  main()
{
    int n;
    int i = 0;
    int j = 0;
    int k;
    cin >> n;
    while (i * i * i < n){
        i++;
    }
    i--;
    k = n - i * i * i;
    while (j * j * j < k){
        j++;
    }
    if (j * j * j == k){
        cout << i << endl << j;
    }
    else{
        cout << "impossible";
    }
}
