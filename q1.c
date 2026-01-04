#include <stdio.h>

int main() {
    int a[] = {3, 5, 1, 9, 2};
    int max = a[0];

    for(int i = 1; i < 5; i++) {
        if(a[i] > max)
            max = a[i];
    }

    printf("Maximum = %d", max);
    return 0;
}
