#include <stdio.h>

void main()
{
    int a, b, c;
    
    float avg;
    
    printf("Enter the values of a, b and c: ");
    
    scanf("%d %d %d", &a, &b, &c);
    
    avg = (float)(a + b + c) / 3;
    
    printf("The average of %d, %d and %d is %.2f\n", a, b, c, avg);
}