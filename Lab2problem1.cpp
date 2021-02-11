#include <iostream>
#include <cmath>
using namespace std;

int main()

{
    double x, y, z;
    cin >> x >> y >> z;
    if (x + y <= z || y + z <= x || x + z <= y){
        cout << "impossible";
    }
    else if (x * x + y * y == z * z || y * y + z * z == x * x || y * y + z * z == x * x){
        cout << "right";
    }
    else if ((y * y + z * z - x * x) > 0 && (x * x + y * y - z * z) > 0 && (x * x + z * z - y * y ) > 0 ){
        cout << "acute";
    }
     else if ((y * y + z * z - x * x) < 0 || (x * x + y * y - z * z) < 0 || (x * x + z * z - y * y ) < 0 ){
        cout << "obtuse";
    }

}
