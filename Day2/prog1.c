#include<stdio.h>
int main(){
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    if(n>0){
        printf("n is positive ");
    }
    else if(n<0)
    {
        printf("n is negative");
    }
    else
       { printf("n is zero");}
 return 0;   
    }