//palindrome number
#include<stdio.h>
int main()
{
    int n,rev=0,rem,new_n;
    printf("enter the number:");
    scanf("%d",&n);
   new_n=n;
   while(n!=0){
   rem=n%10;
   rev= rev*10+rem;
   n=n/10;
   }
   if(rev==new_n){
    printf("palindrome number ");

   }
   else{
    printf("not palindrome number");
   }
return 0;
}