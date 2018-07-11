#include <stdio.h>
int main()
{
        double number;
        scanf("%lf", &number);
        if (number == 0.0)
        printf("Zero");
        else if(number>0.0)
        printf("Positive");
        else if(number<0.0)
        printf("Negative");
        else
        printf("Invalid Input");
        return 0;
}
