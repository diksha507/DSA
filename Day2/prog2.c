#include<stdio.h>
void main(){
    int a,b,c,result;
    printf("enter the three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    result=(a>b)?((a>c)?a:c):((b>c)?b:c);
     printf("%d",result);   
    
    }