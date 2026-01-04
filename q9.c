#include <stdio.h>

int main() {
    int a[] = {1, 2};
    int b[] = {3, 4};
    int c[4];

    for(int i = 0; i < 2; i++)
        c[i] = a[i];
    for(int i = 0; i < 2; i++)
        c[i+2] = b[i];

    for(int i = 0; i < 4; i++)
        printf("%d ", c[i]);

    return 0;
}
