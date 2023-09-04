#include<stdio.h>
void main()
{
    float p;
    int m1, m2, m3, m4, m5, t;
    printf("enter marks of 5 subjects: ");
    scanf("%d%d%d%d%d", &m1,&m2,&m3,&m4,&m5);
    if(m1>=40 && m2>=40 && m3>=40 && m4>=40 && m5>=40)
    {
        t=m1+m2+m3+m4+m5;
        p=t/5.0;
        printf("\nstudent is passed\ntotal marks = %d\npercentage = %.2f", t, p);
    }
    else
    {
        printf("\nstudent is failed");
    }
}


