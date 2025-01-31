//count max number of 1 in array 
#include<stdio.h>
int max1(int a[], int n ){
int count =0;
int maxcount=0;
for(int i=0;i<n;i++){
    if(a[i]==1){
        count++;
        if(maxcount<count){
            maxcount=count;
        }
    }
    else{
        count=0;
    }
}
    return maxcount;
}


 int main(){
   int n=10;
    int a[n];
   printf("enter the elements :");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
   int result = max1(a,n);
    printf("max number of 1 are %d", result);
    
    return 0;
 }