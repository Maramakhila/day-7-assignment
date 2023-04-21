#include <stdio.h>
#include <string.h>

int main()
{
    char string[100];
    int vowels = 0, length;

    printf("Enter a string: ");
    scanf("%s", string);

    length = strlen(string);

    for(int i=0; i<length; i++)
    {
        if(string[i]=='a' || string[i]=='e' || string[i]=='i' || string[i]=='o' || string[i]=='u' ||
           string[i]=='A' || string[i]=='E' || string[i]=='I' || string[i]=='O' || string[i]=='U')
        {
            vowels++;
        }
    }

    printf("Number of vowels in the string: %d", vowels);

    return 0;
}
