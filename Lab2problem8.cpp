#include <iostream>
#include <cmath>
using namespace std;

int  main()
{
    int a, b, m;
    int i = 0;
    int k = 0;
    cin >> a >> b >> m;

    for (i; i < m; i++){
        if ((a * i) % m == b % m){
            cout << i << endl;
            k++;
        }
    }
    if (k == 0){
        cout << -1;
    }
}
