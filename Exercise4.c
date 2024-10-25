// Create a program that asks the user for a number and checks whether it is odd or even.

#include <stdio.h>

int num;
void isEven();

int main()
{
    printf("Insert the number you want:\n");
    scanf("%d" , &num);
    isEven();
}

void isEven()
{
    if ((num % 2) == 0)
    {
        printf("The number is even\n");
    }
    else
    {
        printf("The number is odd\n");
    }
}