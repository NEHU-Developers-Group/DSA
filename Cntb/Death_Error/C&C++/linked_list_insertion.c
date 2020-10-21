#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

void PrintLinkedTraversal(struct Node* ptr)
{
    while (ptr != NULL)
    {
        printf("Elements: %d\n",ptr->data);
        ptr = ptr->next;
    }
    
}

// Case 1
struct Node* insertatfirst(struct Node* head, int data)     // Time complexity is O(1)
{
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node*));
    ptr->next = head;
    ptr->data = data;
}

// Case 2
struct Node* insertatindex(struct Node* head, int data, int index)      // Time complexity is O(n)
{
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node*));

    int i = 0;
    struct Node* p = head;

    while (i != index -1)
    {
        p = p->next;
        i++;
    }

    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;

    return head;
    
}

// Case 3
struct Node* insertatend(struct Node* head,int data)                // Time complexity O(n)
{
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node*));
    ptr->data = data;

    struct Node* p = head;

    while (p->next!= NULL)
    {
        p = p->next;
    }

    p->next = ptr;
    ptr->next = NULL;
    return head;
    
}

// Case 4
struct Node* insertatnode(struct Node* head, struct Node* prevnode, int data)     // Time complexity is O(1)
{
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node*));

    ptr->next = prevnode->next;
    ptr->data = data;
    prevnode->next = ptr;

    return head;
}
 
int main() {
    
    struct Node* head;
    struct Node* second;
    struct Node* third;
    
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    head->data = 14;
    head->next = second;

    second->data = 18;
    second->next = third;

    third->data = 21;
    third->next = NULL;

    PrintLinkedTraversal(head);

    printf("**********************After insertion**********************\n");

    // head = insertatfirst(head, 54);
    // insertatindex(head, 11, 1);
    // insertatend(head,17);
    insertatnode(head, second, 41);

    PrintLinkedTraversal(head);

    return 0;
}
