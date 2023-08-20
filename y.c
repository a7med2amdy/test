#include <stdio.h>
void printArr(int * arr, int size);
int main() {
    int size ; 
    printf("Pls enter size of array");
    scanf("%d",&size);
    int arr [size];
    int *ptr1 = arr ;
    int* ptr2 = & arr [size -1];

    for(int i = 0 ; i<size ; i++){
        scanf("%i",ptr1++);
    }

ptr1 = arr ;
while (ptr1 < ptr2){

    *ptr1 ^= *ptr2 ;
    *ptr2 ^= *ptr1 ;
    *ptr1 ^= *ptr2 ; 
    ptr1 ++ ; ptr2 -- ;
}

    
    





    printf("\nArray after reverse: ");
    printArr(arr, size);
    return 0;
}

















void printArr(int * arr, int size)
{
    // Pointer to arr[size - 1]
    int * arrEnd = (arr + size - 1);

    /* Loop till last array element */
    while(arr <= arrEnd)
    {
        printf("%d, ", *arr);

        // Move pointer to next array element.
        arr++;
    }
}