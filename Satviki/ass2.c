#include<stdio.h>

int main()
{
    int num;
    printf("enter the number");
    scanf("%d",&num);
 
    if(num == 0)
        printf("Zero");
    else if(num < 0)
        printf("Negative");
    else
        printf("Positive");
     
    return 0;
}