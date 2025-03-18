#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);
    printf("%d\n", number & -number);
    return 0;
}
