#include <iostream>
#include <string>.
#include <math.h>

int main()
/*
{
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
*/

/*
{
    double x, y;
    std::cin >> x >> y;
    std::cout << sqrt(pow(x, 2) + pow(y, 2));
}
*/

/*
{
    int N;
    std::cin >> N;
    for (int i = 0; i < N; i++) {
        for (int i = 0; i < N; i++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}
*/

/*
{
    int N;
    int j = 1;
    std::cin >> N;
    for (int i = 0; i < N; i++) {
        for (int i = 0; i < j; i++) {
            std::cout << "*";
        }
        j++;
        std::cout << std::endl;
    }
}
*/

/*
{
    int N;
    std::cin >> N;
    int j = N;
    for (int i = 0; i < N; i++) {
        for (int i = 0; i < j; i++) {
            std::cout << "*";
        }
        j--;
        std::cout << std::endl;
    }
}
*/

{
    int N;
    std::cin >> N;
    int j = N;
    int k = N;
    for (int i = 0; i < N; i++) {
        for (int i = 0; i < N - j; i++) {
            std::cout << " ";
        }
        for (int i = 0; i < k; i++) {
            std::cout << "*";
        }
        j--;
        k = k - 2;
        std::cout << std::endl;
    }
}
























