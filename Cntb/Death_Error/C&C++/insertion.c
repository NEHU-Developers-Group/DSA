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

int Insertion(int arr[], int size, int element,int index,int capacity)
// program for insertion 
{
    if(capacity <= size)
    {
        return -1;
    }
    else
    {
        for (int i = size-1; i >= index; i--)
        {
            arr[i+1] = arr[i];
        }
        arr[index] = element;
        
        return 1;

    }
    
}
 
int main() {
    
    int arr[] = {1,2,11,5};
    Display(arr,4);

    int size, element, index, capacity;
    size = 4;
    element = 41;
    index = 2;
    capacity = 100;

    int result = Insertion(arr,size,element,index,capacity);

    if (result == -1)
    {
        printf("Operation failed .....................\n");
    }
    else
    {
        printf("Operation sucessful ...................\n");
        Display(arr,5);
    }
    
    

    return 0;
}

// time complexity O(n)