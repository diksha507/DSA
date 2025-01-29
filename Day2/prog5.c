#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int a ,b ,c;
    int a1,a2,a3;
    printf("enter the sides :");
    scanf("%d %d %d",&a,&b,&c);
    printf("enter the angles :");
    scanf("%d %d %d",&a1,&a2,&a3);
int sum= a1+a2+a3;

    if (((a+b)>c) && ((c+b)>a)&& ((a+c)>b) && sum==180){
       
            printf("triangle is valid");
        }
    else{
        printf("triangle is not valid");
    }
   
   return 0;}