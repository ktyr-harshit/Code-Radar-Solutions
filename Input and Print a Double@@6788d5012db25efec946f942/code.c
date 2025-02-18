#include <stdio.h>

int main() {
    float a;
    scanf("%f", &a);

    // Truncate to 4 decimal places by multiplying, casting to int, and dividing again
    a = (int)(a * 10000) / 10000.0f;

    // Print the result ensuring no rounding
    printf("You entered: %.4f\n", a);

    return 0;
}
