#include <iostream>
#include <cstdlib>
#include <ctime>

int getMonthlySales() {
    srand(time(0));
    return rand() % 100000;
}

int main() {
    int sales[12] = {0};
    int quarterSales[4] = {0};

    for (int i = 0; i < 12; i++) {
        sales[i] = getMonthlySales();
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            quarterSales[i] += sales[i * 3 + j];
        }
    }
}
        