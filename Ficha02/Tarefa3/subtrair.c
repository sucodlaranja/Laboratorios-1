#include <stdlib.h>
#include <stdio.h>
int subtrair(int n) {
    int x = rand() % 10;
    int y = rand() % 10;
    int z;
    if (n == 1) printf("quanto é %d menos %d?\n", x, y);
    if (n == 2) {
        x = rand() % 100;
        y = rand() % 100;
        printf("quanto é %d menos %d\n", x, y);
    }
    if (n >= 3) {
        x = rand() % 1000;
        y = rand() % 1000;
        printf("quanto é %d menos %d\n", x, y);
    }
    z=x-y;
    return (z);
}