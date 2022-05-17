#include<stdio.h>
#include<conio.h>

struct Node
{
   int data;
   struct Node *next;
}*front = NULL,*rear = NULL;

void enqueue(int);
void dequeue();
void display();

void main()
{
   int choice, element;
   system("cls");

   printf("\nQueue Implementation using Linked List\n");
   while(1){
      printf("\n      MENU      \n");
      printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
      printf("Enter your choice: ");
      scanf("%d",&choice);
      switch(choice){
	 case 1: printf("Enter the element to be enqueued: ");
		 scanf("%d", &element);
		 enqueue(element);
		 break;
	 case 2: dequeue(); break;
	 case 3: display(); break;
	 case 4: exit(0);
	 default: printf("\nWrong selection!!! Please try again!!!\n");
      }
   }
}
void enqueue(int element)
{
   struct Node *newNode;
   newNode = (struct Node*)malloc(sizeof(struct Node));
   newNode->data = element;
   newNode -> next = NULL;
   if(front == NULL)
      front = rear = newNode;
   else{
      rear -> next = newNode;
      rear = newNode;
   }
   printf("\nThe element was enqueued. \n");
}
void dequeue()
{
   if(front == NULL)
      printf("\nQueue is empty\n");
   else{
      struct Node *temp = front;
      front = front -> next;
      printf("\n%d was successfully dequeued from Queue\n", temp->data);
      free(temp);
   }
}
void display()
{
   if(front == NULL)
      printf("\nQueue is empty\n");
   else{
      struct Node *temp = front;
      while(temp->next != NULL){
	 printf("%d<-",temp->data);
	 temp = temp -> next;
      }
      printf("%d<-NULL\n",temp->data);
   }
}
