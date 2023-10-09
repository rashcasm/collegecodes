#include <stdio.h>

void main()
{
    int ch, num, i, count, ori, rev, d, sum;
    printf("Name: Rashmin Chaudhari\nRoll no: 51\n");
    while(1){
    printf("\n\nMenu to check if the number is:\n");
    printf("1. even or odd\n");
    printf("2. positive, negative or zero\n");
    printf("3. prime number\n");
    printf("4. palindrome number\n");
    printf("5. armstrong number\n");
    printf("6. exit\n");
    printf("Enter your choice code: ");
    scanf("%d", &ch);
    switch(ch)
    {
        case 1:
        printf("\nEnter number: ");
        scanf("%d", &num);
        if(num%2==0){
            printf("\n%d is even number", num);
        }
        else{
            printf("\n%d is not a even number", num);
        }
        break;
        
        case 2:
        printf("\nEnter number: ");
        scanf("%d", &num);
        if(num>0){
            printf("\n%d is positive number", num);
        }
        else{
            if(num<0){
                printf("\n%d is negative number", num);
            }
            else{
                printf("\n%d is zero", num);
            }
        }
        break;
        
        case 3:
        printf("\nEnter number: ");
        scanf("%d", &num);
        for(i=1; i<=num; i++)
        {
            if(num%i==0){
                count++;
            }
        }
        if(count==2){
            printf("\n%d is a prime number", num);
        }
        else{
            printf("\n%d is not a prime number", num);
        }
        break;
        
        case 4:
        printf("\nEnter number: ");
        scanf("%d", &num);
        rev=0;
        ori=num;
        while(num>0){
            d=num%10;
            rev=rev*10+d;
            num=num/10;
        }
        if(ori==rev){
            printf("\n%d is a palindrome number", ori);
        }
        else{
            printf("\n%d is not a palindrome number", ori);
        }
        break;
        
        case 5:
        printf("\nEnter number: ");
        scanf("%d", &num);
        sum = 0;
        ori=num;
        while(num>0){
            d=num%10;
            sum=sum+(d*d*d);
            num=num/10;
        }
        if(sum==ori){
            printf("\n%d is an armstrong number", ori);
        }
        else{
            printf("\n%d is not an armstrong number", ori);
        }
        break;
        
        case 6:
        exit(0);
        
        default:
        printf("\nInvalid choice code\n");
    }
    }
}