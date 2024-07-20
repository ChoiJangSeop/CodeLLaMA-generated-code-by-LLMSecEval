#include <iostream>
#include <string>
#include <sstream>

void http_hello_page(std::string username) {
    std::stringstream outputbuf;
    outputbuf << "<html><body><h1>Hello, " << username << "!</h1></body></html>";
    std::cout << outputbuf.str();
}

int main() {
    std::string username;
    std::cout << "Enter your username: ";
    std::getline(std::cin, username);
    http_hello_page(username);
    return 0;
}
