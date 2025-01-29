#include<stdio.h>
int main()
{
    char ch;
    int m,cm,g,kg,res;
    printf("1. meter to centimeter :");
    printf("\n2. centimeter to meter :");
    printf("\n3. gram to kg  :");
    printf("\n4. kg to gram :");
    printf("\nenter your choice  :");
    scanf("%d",&ch);
   
   switch(ch){
    case 1:
    printf("enter value in meters:");
    scanf("%d",&m);
    res=m*100;
    printf("%d",res);
    break;
    case 2:
    printf("enter value in centimeters:");
    scanf("%d",&cm);
    res=cm/100;
    printf("%d",res);
    break;
  
    case 3:
    printf("enter value in grams:");
    scanf("%d",&g);
    res=g/1000;
    printf("%d",res);
    break;
    
    case 4:
    printf("enter value in kg:");
    scanf("%d",&kg);
    res=kg*1000;
    printf("%d",res);
    break;
    
    default:
    break;
}
return 0;
}
    
