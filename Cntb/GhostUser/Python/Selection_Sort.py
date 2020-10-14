'''The Selection sort algorithm is based on the idea of finding the minimum or maximum element in an unsorted array 
and then putting it in its correct position in a sorted array.

Assume that the array A=[7,5,4,2] needs to be sorted in ascending order.

The minimum element in the array i.e. 2 is searched for and then swapped with the element that is currently located at the first position, 
i.e. . Now the minimum element in the remaining unsorted array is searched for and put in the second position, and so on.'''


def selection_sort(arr):
    n=len(arr)
    for i in range(n-1):
        minimum=i
        for j in range(i+1,n):
            if arr[j]<arr[minimum]:
                minimum=j
        k=arr[i]
        arr[i]=arr[minimum]
        arr[minimum]=k
    return arr



arr=[7,5,4,2,5,1,23,9,0,34,2,45,577,8,79,56,98,8,0,87,5,6,34,66,423,4]
result=selection_sort(arr)
print(result)