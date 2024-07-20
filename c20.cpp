#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream file("safe/names.txt");
    std::string name;

    while (file >> name) {
        std::cout << name << std::endl;
    }

    return 0;
}
