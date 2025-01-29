//palindrome
#include<stdio.h>
#include<string.h>

int palindrome(char str[],int start, int end){
    
if(start >=end){
    return 1 ;
}
else if(str[start]!=str[end]){
    return 0;
}
else{
    palindrome(str,start+1,end-1);
}
}

int main(){
    char str[50];
printf("enter a string to check for palindrome:");
scanf("%s",&str);
int n= strlen(str);
if(palindrome(str,0,n-1)){
printf("%s is palindrome", str);
}
else{
    printf("%s is not palindrome", str);
}
    return 0;
}