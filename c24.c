
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

int main() {
    char username[100];
    char command[100];
    FILE *output;

    printf("Enter username: ");
    scanf("%s", username);

    sprintf(comman