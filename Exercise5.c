// Write a program that counts the number of vowels in a user-supplied string.

#include <stdio.h>

int main()
{
    char text[100];
    int vowels = 0;

    printf("Insert the text:\n");
    fgets(text, sizeof(text), stdin);

    for (int i = 0; text[i]; i++)
    {
        if (text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u' ||
            text[i] == 'A' || text[i] == 'E' || text[i] == 'I' || text[i] == 'O' || text[i] == 'U')
        {
            vowels++;
        }
    }

    printf("The total number of vowels is: %d\n", vowels);

    return 0;
}