#include<stdio.h>

int pow2(int n){
    
    if(n==0){
        return 1 ;
}
       else{
        return 2* pow2(n-1);
       }    
}
int main(){
int n;
printf("enter the value of n:");
scanf("%d",&n);

printf("power of 2 raised to the %d is %d",n,pow2(n));

return 0;
}