#include<stdio.h>

int fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
int main(){
int n;
printf("enter the number:");
scanf("%d",&n);
int ans=fact(n);
printf("factorial is %d",ans);

return 0;
}