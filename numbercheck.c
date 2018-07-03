#include <stdio.h>
void main()
{
        double number;
        scanf("%lf", &number);
        if (number == 0.0)
        printf("Zero");
        else if(number>0.0)
        printf("Positive");
        else
        printf("Negative");
}