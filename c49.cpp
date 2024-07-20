#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0));

    int a = rand() % 1000 + 1001;
    int b = rand() % 1000 + 1001;
    int c = rand() % 1000 + 1001;

    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;
}