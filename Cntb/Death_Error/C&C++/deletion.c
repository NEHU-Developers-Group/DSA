#include<stdio.h>

void Display(int *arr , int n)
// traversal of array
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    
}

void Deletion(int arr[], int size, int index)
// program for deletion
{
   
    for (int i = index; i < size; i++)
    {
        arr[i] = arr[i+1];
    }
                            
}
 
int main() {
    
    int arr[] = {1,2,11,5};
    Display(arr,4);

    int size, element, index, capacity;
    size = 4;
    element = 41;
    index = 1;
    capacity = 100;

    Deletion(arr,size,index);

    size -= 1;
    Display(arr,size);

    return 0;
}