#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "()()";
    int count = 0;

    for(int i = 0; s[i]; i++) {
        if(s[i] == '(') count++;
        else count--;
        if(count < 0) break;
    }

    if(count == 0)
        printf("Balanced");
    else
        printf("Not Balanced");
}
