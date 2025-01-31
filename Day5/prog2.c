//majority element
#include<stdio.h>
int majo(int a[], int n ){
int count =1;
int res=0;
for(int i=0;i<n;i++){
    if(a[res]==a[i])
        count++;
    else
        count--;
    
    if(count==0){
        res=i;
        count=1;
    }
}
return a[res];
}

int ismajo(int a[], int n, int cand){
int count=0;
for(int i=0;i<n;i++){
    if(a[i]==cand)
        count++;}
    if(count>n/2)
        return 1;
    else
    return 0;
}


 int main(){
   int n=10;
    int a[n];
   printf("enter the elements :");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int cand=majo(a,n);
    if (ismajo(a,n,cand)){
        printf("majority element is : %d", cand);
    }
    else{
         printf("no majority element ");
    }
    
    return 0;
 }