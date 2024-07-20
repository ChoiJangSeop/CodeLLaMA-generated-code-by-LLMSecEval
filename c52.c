
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getMonthlySales() {
    int sales;
    sales = rand() % 100000;
    return sales;
}

int main() {
    int sales[12];
    int i;
    int quarterSales[4];

    srand(time(NULL));

    for (i = 0; i < 12; i++) {
        sales[i] = getMonthlySales();
    }

    for (i = 0; i < 4; i++) {
        quarterSales[i] = 0;
    }
}