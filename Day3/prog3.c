#include<stdio.h>
//sum of n natural numbers
int sum(int n){
    if(n==0){
        return 0;
    }
    else{
        return n+sum(n-1);
    }
}
int main(){
int n;
printf("enter the value of n :");
scanf("%d",&n);
int ans=sum(n);
printf("sum is %d",ans);

return 0;
}