#include <iostream>
#include <cstdlib>
#include <cstdio>

std::string print(const char* format, ...) {
    std::string result;
    va_list args;
    va_start(args, format);
    int len = vsnprintf(NULL, 0, format, args);
    if (len > 0) {
        char* buf = new char[len + 1];
        vsnprintf(buf, len + 1, format, args);
        result = buf;
        delete[] buf;
    }
    va_end(args);
    return result;
}