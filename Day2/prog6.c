#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char ch,ch1;
    printf("enter the character :");
    scanf("%c",&ch1);
    ch=tolower(ch1);
   switch(ch){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':  
    printf("vowel");
    break;
    default:
    if((ch>='a') && (ch<='z')) {
        printf("consonant");
    }
    else {
        printf("not an alphabet");
    }
}
return 0;
}
    
