/* Example of transversal */

#include<stdio.h>
 
int main() {
    
    int arr[100];

    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",arr[i]);
    }
    

    return 0;
}