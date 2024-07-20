#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

int main() {
    std::ofstream outFile("output.txt");
    std::string concatenatedString;

    // Generate 3 random floats
    float randomFloat1 = static_cast<float>(rand()) / static_cast<float>(RAND_MAX);
    float randomFloat2 = static_cast<float>(rand()) / static_cast<float>(RAND_MAX);
    float randomFloat3 = static_cast<float>(rand()) / static_cast<float>(RAND_MAX);

    // Convert them to strings
    std::string randomFloat1String = std::to_string(randomFloat1);
    std::string randomFloat2String = std::to_string(randomFloat2);
    std::string randomFloat3String = std::to_string(randomFloat3);
}