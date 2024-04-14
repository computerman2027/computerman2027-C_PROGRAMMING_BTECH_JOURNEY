#include <stdio.h>
#include <stdlib.h>

typedef struct queue
{
    int *arr,size, front, end;
} Queue;
void createQueue(Queue *queue,int n)
{
    queue->size=n;
    queue->arr=(int *)malloc(n*sizeof(int));
    queue->front=queue->end=-1;
}
void enqueue(Queue *queue, int n)
{
    if(queue->end==queue->size-1)
    {
        printf("OVERFLOW\n");
        return;
    }
    if(queue->front==-1)
    queue->front=queue->end=0;
    else
    queue->end++;
    queue->arr[queue->end]=n;
}
void dequeue(Queue *queue)
{
    if(queue->front==-1)
    {
        printf("UNDERFLOW\n");
        return;
    }
    int p = queue->front;
    if(queue->front==queue->end)
    queue->front=queue->end=-1;
    else
    queue->front++;
    printf("Dequeued element = %d\n",queue->arr[p]);
}
void display(Queue *queue)
{
    if(queue->front==-1)
    {
        printf("QUEUE IS EMPTY\n");
        return;
    }
    int i;
    for(i=queue->front;i<=queue->end;i++)
    {
        printf("%d ",queue->arr[i]);
    }    
    printf("\n");
}
int main()
{
    Queue queue;
    int n, choice,num;
    printf("Enter size of queue : ");
    scanf("%d", &n);
    if (n < 1)
    {
        printf("INVALID INPUT\n");
        return 0;
    }
    else
    {
        createQueue(&queue,n);
        while(1)
        {
            printf("MENU\n");
            printf("1. INSERT\n");
            printf("2. REMOVE\n");
            printf("3. DISPLAY QUEUE\n");
            printf("4. EXIT\n");
            printf("Enter your choice : ");
            scanf("%d", &choice);
            switch (choice)
            {
                case 1:printf("Enter number : ");
                scanf("%d",&num);
                enqueue(&queue,num);
                break;
                case 2: dequeue(&queue);
                break;
                case 3:display(&queue);
                break;
                case 4:
                printf("THANK YOU FOR USING QUEUE");
                return 0;
                default:
                printf("INVALID CHOICE WRONG CHOICE... TRY AGAIN\n");
                break;
            }
        }
    }
}
