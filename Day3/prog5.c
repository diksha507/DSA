#include<stdio.h>

void printn(int current , int n){
    
    if(current>n){
        return ;
}
        printf("%d",current);
        printn(current+1,n);
    
    
}
int main(){
int n;
printf("enter the value of n:");
scanf("%d",&n);

printn(1, n);

return 0;
}