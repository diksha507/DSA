#include<stdio.h>

int fib(int n){
    if(n==0||n==1){
        return n;
    }
    else{
        int ans =fib(n-1)+fib(n-2);
        return ans;
    }
}
int main(){
int n;
printf("enter the value of n:");
scanf("%d",&n);
int ans=fib(n);
printf("fibonacci term is %d",ans);

return 0;
}