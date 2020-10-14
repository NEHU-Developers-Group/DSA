'''Merge sort is a divide-and-conquer algorithm based on the idea of breaking down a list into several sub-lists until each sublist consists of a single element and merging those sublists in a manner that results into a sorted list.

Idea:

Divide the unsorted list into  N sublists, each containing  1 element.
Take adjacent pairs of two singleton lists and merge them to form a list of 2 elements. N will now convert into N/2 lists of size 2.
Repeat the process till a single sorted list of obtained.
While comparing two sublists for merging, the first element of both lists is taken into consideration. 
While sorting in ascending order, the element that is of a lesser value becomes a new element of the sorted list. 
This procedure is repeated until both the smaller sublists are empty and the new combined sublist comprises all the elements of both the sublists.'''

'''The list of size N is divided into a max of logN parts, 
and the merging of all sublists into a single list takes O(N) time, 
the worst case run time of this algorithm is O(NlogN)

 '''
def merge(S1,S2,S):
    print(S1,S2)
    i=j=0
    while i+j<len(S):
        if j==len(S2) or (i<len(S1) and S1[i]<S2[j]):
            S[i+j]=S1[i]
            i+=1
        else:
            S[i+j]=S2[j]
            j+=1
    return S 

def merge_sort(arr):
    if len(arr)<=2:
        return sorted(arr)
    mid=len(arr)//2
    S1=arr[:mid]
    S2=arr[mid:]
    S1=merge_sort(S1)
    S2=merge_sort(S2)
    return merge(S1,S2,arr)


arr=[4,6,5,7,8,1,3,2,9,11,12,10,15,14,13]
result=merge_sort(arr)
print(result)