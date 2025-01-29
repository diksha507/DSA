//prime number
#include<stdio.h>
int main()
{
    int n,count=0,flag;
    printf("enter the value for n:");
    scanf("%d",&n); 

   for(int j=2;j<=n;j++){
       flag=1;
   for (int i=2; i<j/2;i++){
        if (j%i==0){
          flag=0;
          break;}}
          if(flag){


        printf("%d ",j);}
   
   }
  
   return 0;
}