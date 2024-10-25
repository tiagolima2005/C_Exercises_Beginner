// ask the user to insert 3 scores and calculate the average. Display the result

#include <stdio.h>

int main()
{
    double grade1, grade2, grade3;
    printf("Insert the first grade:\n");
    scanf("%lf", &grade1);
    printf("Insert the second grade:\n");
    scanf("%lf", &grade2);
    printf("Insert the third grade:\n");
    scanf("%lf", &grade3);
    double average = (grade1 + grade2 + grade3) / 3;
    printf("The average of the 3 grades is: %.2lf", average);

    return 0;
}