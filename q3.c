#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int even = 0, odd = 0;

    for(int i = 0; i < 5; i++) {
        if(a[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even: %d, Odd: %d", even, odd);
    return 0;
}
