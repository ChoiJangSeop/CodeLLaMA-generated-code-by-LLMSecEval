#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int a = rand() % 1000 + 1001;
    int b = rand() % 1000 + 1001;
    int c = rand() % 1000 + 1001;

    printf("a : %d\nb : %d\nc : %d\n", a, b, c);

    int sum = a + b + c;
    printf("%d", sum);
}