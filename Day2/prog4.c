#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char ch,ch1;
    printf("enter the character :");
    scanf("%c",&ch1);
    ch=tolower(ch1);
    if ((ch>='a') && (ch<='z')){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            printf("vowel");
        }
    else{
        printf("consonant");
    }
    }
   else
   printf("not an alphabet") ;
}