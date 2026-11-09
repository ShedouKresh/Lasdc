#include <stdio.h>
#include "io.h"
#include "op3.h"

int main() {
    int a[20];
    int size = 20;
    inputArray(a, size);
    removeFirstNegative(a, &size);
    printArray(a, size);
    return 0;
}