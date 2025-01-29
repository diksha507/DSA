#include<stdio.h>
//count digits
int countd(int n){
    
    if(n/10==0){
        return 1;
    }
    else{
        return 1+ countd(n/10);
    }
    
}
int main(){
int n;
printf("enter the value of n:");
scanf("%d",&n);
printf("count is %d",countd(n));

return 0;
}