#include <stdio.h>
void main()
{
    char ch;
    printf("\n Enter any character: ");
    scanf("%c", &ch);
    
    if(ch>=65 && ch <=90)
    {
        printf("\n Upper case");
    }
    else
    {
        if(ch>=97 && ch <=122)
        {
            printf("\n Lower case");
        }
        else
        {
            if(ch>=48 && ch<=57)
            {
                printf("\n Digit");
            }
            else
            {
                printf("\n Special character");
            }
        }
    }
}