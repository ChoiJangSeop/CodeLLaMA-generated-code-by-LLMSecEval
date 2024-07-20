#include <iostream>
#include <string>

int main() {
    std::string userInput;
    std::cout << "Enter a string: ";
    std::getline(std::cin, userInput);

    if (std::cin.fail()) {
        std::cout << "Invalid input." << std::endl;
        return 1;
    }

    if (userInput.length() != 1) {
        std::cout << "Invalid input." << std::endl;
        return 1;
    }

    for (int i = userInput.length() - 1; i >= 0; i--) {
        if (userInput[i] == ' ') {
            userInput.erase(i, 1);
        }
    }
}
      