// C program to add two functions 
#include <stdio.h>
int main(){
    int a, b, c, d, x, y, gcd;
    printf("Enter the numerator[First Number]: ");
    scanf("%d", &a);
    printf("Enter the denominator[First Number]: ");
    scanf("%d", &b);
    printf("Enter the numerator[Second Number]: ");
    scanf("%d", &c);
    printf("Enter the denominator[Second Number]: ");
    scanf("%d", &d);
    
    x = (a * d + b * c);
    y = b * d;
    
    for (int i = 1; i <= x && i <= y; ++i){
        if (x % i == 0 && y % i == 0){
            gcd = i;
        }
    }
    printf("After addition we get: %d/%d +%d/%d = %d/%d", a, b, c, d, x/gcd, y/gcd);
    return 0;
}