
#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("enter the value for n:");
    scanf("%d",&n);
   for (int i=0; i<=n;i++){
       sum=sum+i;
   }
   
   printf("%d",sum);
   return 0;
}