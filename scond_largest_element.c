#include<stdio.h>
#include<string.h>
#include<limits.h>
#define MAX 10 
int main() 
{
int max1 , max2 ;
 max1 = max2 = INT_MIN ;   
int arr[MAX];

int size ; 

printf("Pls enter array size ");
scanf("%d",&size);

printf("enter array elements\n");
for(int i = 0 ;i<size ; i++){
  scanf("%d",&arr[i]);
}


for(int i = 0;i<size ; i++){
  if(arr[i]>max1){

    max2=max1;
    max1=arr[i];

  }

  else if(arr[i]>max2 && arr[i]<max1){
    max2=arr[i];
  } 
}

printf("First largest = %d\n", max1);
printf("Second largest = %d", max2);



return 0;
}

