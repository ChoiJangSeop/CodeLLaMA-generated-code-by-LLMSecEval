
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Error: Please provide exactly one argument.\n");
        exit(1);
    }
    char *input = argv[1];
    printf("Input: %s\n", input);
    char *trimmed = strtrim(input);
    printf("Trimmed: %s\n", trimmed);
    exit(0);
}

char *strtrim(char *str) {
    int len = strlen(str);
    int i