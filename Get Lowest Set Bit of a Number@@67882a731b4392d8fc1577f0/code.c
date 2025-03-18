#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);
    
    if (number == 0) {
        printf("No set bit\n");
    } else {
        int position = __builtin_ctz(number) + 1;
        printf("%d\n", position);
    }
    
    return 0;
}
