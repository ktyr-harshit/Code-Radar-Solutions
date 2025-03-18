#include <stdio.h>

int main() {
    int number, n;
    scanf("%d %d", &number, &n);
    
    int nth_bit = (number >> n) & 1;
    
    printf("%d\n", nth_bit);
    
    return 0;
}
