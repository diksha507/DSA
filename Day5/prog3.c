//max subarray sum of the array 
//KADANEs algorithm 
#include<stdio.h>
#include<limits.h>
int maxsumarray(int a[], int n ){
int maxsum= INT_MIN;
int curr_sum=0;

for(int i=0;i<n;i++){
    curr_sum+=a[i];
    if(curr_sum>maxsum){
        maxsum=curr_sum;
    }
    if(curr_sum<0){
        curr_sum=0;
    }
}
return maxsum; 
}

 int main(){
    int n=10;
    int a[n];
    printf("enter the elements :");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int ans=maxsumarray(a,n);
    printf("maximum sum is : %d",ans );
   
    return 0;
 }