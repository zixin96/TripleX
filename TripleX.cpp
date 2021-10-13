#include <iostream>

int main()
{
    // print welcome messages to the terminal
    std::cout << "You are a secret agent breaking into a secure server room" << std::endl;;
    std::cout << "You need to enter the correct codes to continue..." << std::endl;

    // declare 3 number code
    const int a = 4;
    const int b = 3;
    const int c = 2;

    const int sum = a + b + c;
    const int product = a * b * c;

    // print sum and product to the terminal
    std::cout << sum << std::endl;
    std::cout << product << std::endl;

    return 0;
}