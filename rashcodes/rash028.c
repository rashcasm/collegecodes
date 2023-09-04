#include<stdio.h>
void main()
{
    char ch;
    printf("\n enter any upper case character: ");
    scanf("%c", &ch);
    if(ch>=65 && ch<= 90){
        ch = ch+32;
    }
    printf("\n lower case: %c", ch);
}

