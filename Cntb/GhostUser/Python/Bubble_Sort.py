'''Sorting Algorithms are concepts that every competitive programmer must know. 
Sorting algorithms can be used for collections of numbers, strings, characters, or a structure of any of these types.

Bubble sort is based on the idea of repeatedly comparing pairs of adjacent elements and then swapping their positions if they exist in the wrong order.
'''

def bubble_sort(arr):
    n=len(arr)
    for i in range(n-1):
        for j in range(n-1-i):
            if arr[j]>arr[j+1]:
                k=arr[j]
                arr[j]=arr[j+1]
                arr[j+1]=k
    return arr

arr=[4,6,5,7,8,1,3,2,9,11,12,10,15,14,13]
result=bubble_sort(arr)
print(result)

#Time complexity is O(n^2)