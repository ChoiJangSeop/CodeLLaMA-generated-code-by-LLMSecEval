#include <iostream>
#include <fstream>
#include <string>

void http_hello_page(std::ifstream& request, std::ofstream& response) {
    std::string username;
    std::getline(request, username);
    std::string escaped_username = escape_html(username);
    std::string response_message = "hello " + escaped_username;
    response << response_message;
}

std::string escape_html(const std::string& str) {
    std::string escaped_str;
    for (char 