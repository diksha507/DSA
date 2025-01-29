//reverse string
#include<stdio.h>
#include<string.h>

void revstr(char str[],int start, int end){
    
if(start >=end){
    return ;
}
char temp =str[start];
str[start]=str[end];
str[end]=temp;
return revstr(str,start+1,end-1);
}

int main(){
    char str[50];
printf("enter a string:");
scanf("%s",&str);
int n= strlen(str);
revstr(str,0,n-1);
printf("its reverse is : %s", str);
    return 0;
}