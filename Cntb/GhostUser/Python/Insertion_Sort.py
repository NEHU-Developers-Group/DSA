'''Insertion sort is based on the idea that one element from the input elements is consumed in each iteration to find its correct position i.e, 
the position to which it belongs in a sorted array.

It iterates the input elements by growing the sorted array at each iteration. 
It compares the current element with the largest value in the sorted array. 
If the current element is greater, then it leaves the element in its place and moves on to the next element else it finds its correct position in the sorted array and moves it to that position. 
This is done by shifting all the elements, which are larger than the current element, in the sorted array to one position ahead'''

def insertion_sort(n, arr):
    for i in range(1,n):
        k=arr[i]
        j=i-1
        while j>=0 and arr[j]>k:
            arr[j+1]=arr[j]
            j=j-1
        arr[j+1]=k 
    return (arr)    

arr=[4,6,5,7,8,1,3,2,9,11,12,10,15,14,13]
result=insertion_sort(len(arr),arr)
print(result)