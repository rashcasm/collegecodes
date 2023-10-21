#include <stdio.h>
void main(){
    int a[5], b[5], c[5];
    int i;
    printf("\nEnter values for a:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nEnter values for b:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d", &b[i]);
    }
    for(i=0;i<5;i++)
    {
        c[i]=a[i]+b[i];
    }
    printf("\nArray A: ");
    for(i=0;i<5;i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\nArray B: ");
    for(i=0;i<5;i++)
    {
        printf("%d\t", b[i]);
    }
    printf("\nArray C: ");
    for(i=0;i<5;i++)
    {
        printf("%d\t", c[i]);
    }
}