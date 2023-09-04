#include<stdio.h>
void main()
{
    char ch;
    printf("\n enter any lower case character: ");
    scanf("%c", &ch);
    if(ch>=97 && ch <= 122){
        ch = ch-32;
    }
    printf("\n upper case: %c", ch);
}


