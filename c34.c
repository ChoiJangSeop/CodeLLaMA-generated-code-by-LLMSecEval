#include <stdio.h>
#include <stdlib.h>

int main() {
    char command[100];
    printf("Enter the command: ");
    scanf("%s", command);
    system(command);
    return 0;
}
