//upeer lowercase special character
#include<stdio.h>

int main()
{
    char ch;
    printf("enter the character :");
    scanf("%c",&ch);
   
    if ((ch>='a') && (ch<='z')){
        printf("lowercase character ");
}
    else if ((ch>='A') && (ch<='Z')){
        printf("UPPERCASE CHARACTER ");}
   else{
   printf("special character") ;
}
   return 0;
}