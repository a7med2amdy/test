#include<stdio.h>
int fill_arr(int *ptr ,int size);
int main()
{
  int size = 3
 int arr[size];

 fill_arr(arr , 2);

 for(int i=0 ; i<3 ; i++){
 printf("arr[%d] = %d\n",i,arr[i]);
 // printf("%d \n",arr[i]);
}


return 0;
    
}

int fill_arr(int *ptr ,int size){
for(int i=0 ; i<size ; i++){
  scanf("%d",*ptr+i);
}
}













