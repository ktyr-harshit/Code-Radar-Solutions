#include <stdio.h>
#include <math.h>

int main() {
    float a;
    scanf("%f", &a);

    // Truncate to 4 decimal places
    a = (int)(a * 10000) / 10000.0f;

    // Print the result with 4 decimal places
    printf("You entered: %.4f\n", a);

    return 0;
}
