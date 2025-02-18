#include<stdio.h>
#include <math.h>
int main(){
    float a;
    scanf("%f", &a);
    a = floorf(a * 10000) / 10000;
    printf("You entered: %.4f",a);
    return 0;
}