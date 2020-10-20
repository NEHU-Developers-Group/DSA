#include<stdio.h>

int BinarySearch(int arr[], int size, int element)
{
    int low,mid,high;
    low  = 0;
    high = size -1; 
    
    while(low <= high)
    {
        mid = (low + high)/2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if(arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
        
    }
    return -1;
}
 
int main() {
    
    int arr[] = {1,2,5,8,47,48,51,65};
    int size = sizeof(arr)/sizeof(int);
    int element = 47;

    int search = BinarySearch(arr, size, element);

    printf("The element %d is found in index %d",element,search);

    return 0;
}