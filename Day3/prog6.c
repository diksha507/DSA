#include<stdio.h>

int sumofd(int n){
    int sum=0;
    if(n==0){
        return 0;
}
else{
       return (n%10 + sumofd(n/10));
    
}
}
int main(){
int n1;
printf("enter the value of n:");
scanf("%d",&n1);

printf("sum of digits is %d",sumofd(n1));

return 0;
}