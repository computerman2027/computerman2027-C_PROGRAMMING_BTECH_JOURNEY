#include<stdio.h>
#include<stdlib.h>

typedef struct Stack{
    int *arr,top,size;
}Stack;

void push(int n,Stack *stck)
{
    if(stck->top==stck->size-1)
    {
        printf("OVERFLOW\n");
    }
    else
    {
        stck->top++;
        stck->arr[stck->top]=n;
    }
}
void pop(Stack *stck)
{
    if(stck->top==-1)
    {
        printf("UNDERFLOW\n");
    }
    else
    {
        int p = stck->arr[stck->top];
        stck->top--;
        printf("POPPED VALUE = %d\n",p);
    }
}
void peek(Stack *stck)
{
    if(stck->top==-1)
    {
        printf("NO CONTENT TO BE DISPLAYED AS STACK IS EMPTY\n");
    }
    else
    {
        printf("TOP ELEMENT IS %d\n",stck->arr[stck->top]);
    }
}
int isEmpty(Stack *stck)
{
    if(stck->top==-1)
    return 1;
    else
    return 0;
}
int isFull(Stack *stck)
{
    if(stck->top==stck->size-1)
    return 1;
    else
    return 0;
}
void createStack(int n,Stack *stck)
{
    stck->arr=(int *)malloc(n*sizeof(int));
    stck->top=-1;
    stck->size=n;
}
int main()
{
    int n,choice,num,ans;
    Stack stack;
    printf("enter size of stack : ");
    scanf("%d",&n);
    if(n<1)
    {
        printf("INVALID INPUT");
        return 0;
    }
    createStack(n,&stack);
    while(1)
    {
        printf("MENU\n");
        printf("1. Push a number \n");
        printf("2. Pop a number \n");
        printf("3. Peek of a stack \n");
        printf("4. Is Empty \n");
        printf("5. Is Full \n");
        printf("6. Exit \n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("Enter a number that need to be stored : ");
            scanf("%d",&num);
            push(num,&stack);
            break;
            case 2:pop(&stack);
            break;
            case 3:peek(&stack);
            break;
            case 4:ans=isEmpty(&stack);
            if(ans==1)
            printf("STACK IS EMPTY\n");
            else
            printf("STACK IS NOT EMPTY\n");
            break;
            case 5:ans=isFull(&stack);
            if(ans==1)
            printf("STACK IS FULL\n");
            else
            printf("STACK IS NOT FULL\n");
            break;
            case 6: printf("THANK YOU FOR USING STACK");
            return 0;
            default:printf("INVALID CHOICE WRONG CHOICE... TRY AGAIN\n");
            break;
        }

    }
}