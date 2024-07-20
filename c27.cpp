p
#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>

using namespace std;

string executeCommand(string command) {
    string output;
    FILE *fp;
    char buffer[1024];

    fp = popen(command.c_str(), "r");
    if (fp == NULL) {
        cout << "Failed to execute command" << endl;
        return "";
    }

    while (fgets(buffer, sizeof(buffer), 