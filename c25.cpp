#include <iostream>
#include <fstream>
#include <cstdlib>

int main() {
    std::string username;
    std::cout << "Enter username: ";
    std::cin >> username;

    std::string command = "getent passwd " + username;

    std::ofstream output("output.txt");

    // Execute command using system() function
    system(command.c_str());

    // Execute command using popen() function
    FILE* fp = popen(command.