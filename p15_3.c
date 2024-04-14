#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
void insertAtEnd(struct Node **head, int data)
{
    struct Node *newNode = createNode(data);
    struct Node *temp = *head;
    if (temp == NULL)
    {
        *head = newNode;
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
void insertAtFirst(struct Node **head, int data)
{
    struct Node *newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

int countNodes(struct Node*head)
{
    
}
void printList(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    struct Node *head = NULL;

    insertAtEnd(&head, 101);
    printList(head);
    insertAtFirst(&head, 89);
    printList(head);
    insertAtFirst(&head, 40);
    printList(head);
    insertAtFirst(&head, 50);
    printList(head);
    insertAtEnd(&head, 789);
    printList(head);
    insertAtEnd(&head, 450);
    printList(head);
    insertAtEnd(&head, 990);
    printList(head);

    return 0;
}