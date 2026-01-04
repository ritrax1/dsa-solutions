#include <stdio.h>

int main() {
    int a[] = {5, 3, 7, 1};
    int key = 7;

    for(int i = 0; i < 4; i++) {
        if(a[i] == key) {
            printf("Found at %d", i);
            return 0;
        }
    }
    printf("Not found");
}
