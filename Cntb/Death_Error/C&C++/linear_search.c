#include<stdio.h>

int LinearSearch(int arr[], int size, int element)
{ 
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
            
    }
    return -1;
        
}
 
int main() {
    
    int arr[] = {1,5,8,6,7,14,55};
    int size = sizeof(arr)/sizeof(int);
    int element = 7;

    int SearchResult = LinearSearch(arr, size, element);

    printf("The element %d is found in %d index",element,SearchResult);

    return 0;
}

// time complexity O(n)