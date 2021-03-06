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
// Delete the first element
struct Node * DeleteFirstElement(struct Node * head) // Time Complexity O(1)
{
    struct Node * ptr = head;
    head = head->next;
    free(ptr);
    return head;
    

}
// Delete at index
struct Node * DeleteAtIndex(struct Node * head, int index) // Time complexity O(n)
{
    struct Node * p = head;
    struct Node * q = head->next;
    int i = 0;
    while (i < index-1)
    {
        p = p->next;
        q = q->next;
        i++;
    }
    p->next = q->next;
    free(q);
    return head;
}
// Delete the last node
struct Node * DeleteAtLast(struct Node * head) // Time complexity O(n)
{
    struct Node * p = head;
    struct Node * q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}
// Delete a node with a given value
struct Node * DeletewithValue(struct Node * head, int value) // Time complexity O(n)
{
    struct Node * p = head;
    struct Node * q = head->next;
    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    if(q->data == value){
        p->next = q->next;
        free(q);
    }
    else
    {
        printf("Value Not found!\n");
    }
    
    return head;
    
}

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

    // head = DeleteFirstElement(head);
    // head = DeleteAtIndex(head,2);
    // head = DeleteAtLast(head);
    head =  DeletewithValue(head,15);
    printf("Linked list after deletion\n");
    Linkedlisttraversal(head);


    return 0;
}