//Make a multiplication table

#include <stdio.h>

int main()
{
    int num;
    printf("Insert the number you want to see the multiplication table of:\n");
    scanf("%d" , &num);
    for (int i = 1; i <= 10; i++)
    {
        int multiplication = num * i;
        printf("%d x %d = %d\n" , num , i , multiplication);
    }
    return 0;
}