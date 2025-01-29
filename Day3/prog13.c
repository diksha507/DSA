//binary search
#include<stdio.h>
int bsearch(int a[], int low ,int high, int key){
    int mid= (low+high)/2;
    if(low>high){
        return -1;
    }
if(a[mid]==key){
    return mid;
}
else if(a[mid]>key){
   return bsearch(a,low,mid-1,key);

}
else if (a[mid]<key){
   return bsearch(a,mid+1,high,key);

}

    
}

int main(){
int a[50];
//input the array 
for(int i =0;i<10;i++){
    printf("enter element: ");
    scanf("%d",&a[i]);
}
int key;
printf("enter key: ");
    scanf("%d",&key);
int result=bsearch(a, 0, 9, key);
if(result!=-1){
printf("element found at %d", result);}
else{
    printf("element not found");
}

}