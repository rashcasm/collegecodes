#include <stdio.h>

int main() {
    int i,j;
    for(i=1; i<=4; i++)
    {
        for(j=101; j>=97; j--)
        {
            printf("%c ", j);
        }
        printf("\n");
    }

    return 0;
}