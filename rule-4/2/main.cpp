#include <cstdio>
#include "add.h"
#include "sub.h"

int main() {
    printf("1 + 5 = %d\n", __add(1, 5));
    printf("1 - 5 = %d\n", __sub(1, 5));
    return 0;
}
