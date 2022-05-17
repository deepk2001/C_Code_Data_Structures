#include <stdio.h>
#define limit 15
void enqueue(int queue[],int element);
void dequeue(int queue[]);
void display(int queue[]);
int queue[limit];
int rear = - 1;
int front = - 1;
void main()
{
    int choice,element=0;
    while (rear<limit-1)
    {
        printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.exit\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            printf("enter element:");
            enqueue(queue,element);
            break;

            case 2:
            dequeue(queue);
            break;
            case 3:
            display(queue);
            break;
            case 4:
            exit(0);
            default:
            printf("please enter valid choice \n");
        }
        getch();
    }
}
void enqueue(int queue[],int element)
{

    if (rear == limit - 1)
    printf("Queue at maximum limit.\n");
    else
    {

        front = 0;
        rear++;
        queue[rear] = element;
    }
}
void dequeue(int queue[])
{
    if (rear=-1)
    {
        printf("Queue is empty \n");
        return ;
    }
    else
    {
        printf("Element deleted from queue is : %d\n", queue[front]);
        front++;
    }
}
void display(int queue[])
{
    int i;
    if (front == - 1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i = front; i <= rear; i++)
            printf("%d\t ", queue[i]);
            printf("\n");

    }
}
