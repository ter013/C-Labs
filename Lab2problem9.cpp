#include <iostream>
#include <cmath>
using namespace std;

int  main()
{
    int N;
    cin >> N;
    int a, b, c, d;
    for (int i = 0; i < N; i++){
        int t;
        cin >> t;
        if (i == 0){
            a = t, b = t, c = t, d = t;
        }
        else{
            if (t >= a){
                b = a;
                a = t;
            }
            if (t <= d){
                c = d;
                d = t;
            }
        }
    }
    cout << a << b << c << d;
}
