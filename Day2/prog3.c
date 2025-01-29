#include<stdio.h>
int main()
{
    int y;
    printf("enter the year:");
    scanf("%d",&y);

    if (y%400==0){
        printf("leap year");
    }
    else if (y%100==0){
        printf("not a leap year ");

    }
    else if (y%4==0){
        printf("leap year");

    }
    else
    printf("leap year");
}