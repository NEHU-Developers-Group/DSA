#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node * next;
};

void Linkedlisttraversal(struct Node * head)
{
    struct Node * ptr = head;
    while (ptr != NULL)
    {
        printf("Element: %d\n",ptr->data);
        ptr = ptr->next;
    }
    
}

struct Node * DeleteFirstElement(struct Node * head) // Time Complexity O(1)
{
    struct Node * ptr = head;
    head = head->next;
    free(ptr);
    return head;
    

};

int main() {
    
    struct Node * head;
    struct Node * first;
    struct Node * second;
    struct Node * third;

    head = (struct Node *)malloc(sizeof(struct Node));
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 14;
    head->next = first;

    first->data = 15;
    first->next = second;

    second->data = 16;
    second->next = third;

    third->data = 17;
    third->next = NULL;

    printf("Linked list before deletion\n");
    Linkedlisttraversal(head);

    head = DeleteFirstElement(head);
    printf("Linked list after deletion\n");
    Linkedlisttraversal(head);


    return 0;
}