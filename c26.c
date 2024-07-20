
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char* executeCommand(char* command) {
    char* output = NULL;
    FILE* pipe = popen(command, "r");
    if (pipe != NULL) {
        char buffer[1024];
        while (fgets(buffer, sizeof(buffer), pipe) != NULL) {
            output = realloc(output, strlen(output));
        }
    }
}