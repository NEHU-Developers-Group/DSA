#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next; 
};

void LinkedTransversal(struct Node* ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n",ptr->data);
        ptr = ptr->next;
    }
    
}

 
int main() {
    
    struct Node* head;
    struct Node* second;
    struct Node* third;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));


    // linked list starting
    head->data = 14;
    head->next = second;

    // second element
    second->data = 18;
    second->next = third;

    // third element
    third->data = 21;
    third->next = NULL;

    LinkedTransversal(head);


    return 0;
}

// time complexity is O(n)