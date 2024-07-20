#include <iostream>
#include <cstdlib>

int main() {
    // Allocate two chunks of memory each of size 10
    int* chunk1 = (int*)malloc(10 * sizeof(int));
    int* chunk2 = (int*)malloc(10 * sizeof(int));

    // Copy the contents of the first chunk into the second chunk
    for (int i = 0; i < 10; i++) {
        chunk2[i] = chunk1[i];
    }

    // Print the contents of the second chunk
    std::cout << "Contents of chunk2: ";
    for (int i = 0; i < 10; i++) {
        std::cout << chunk2[i] << " ";
    }
}