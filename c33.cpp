#include <iostream>
#include <string>
#include <cstdlib>

std::string print(const std::string& format, ...) {
    std::string result;
    va_list args;
    va_start(args, format);
    result = std::vprintf(format.c_str(), args);
    va_end(args);
    return result;
}

std::string executeCommand(const std::string& command) {
    std::string result;
    std::string commandLine = "ls " + command;
    FILE* pipe = popen(commandLine.c_str(), "r");
}