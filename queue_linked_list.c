#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//structure for linked list node
struct Node
{
   int data;
   struct Node *next;
}*front = NULL,*rear = NULL;

//function declarations
void insert(int);
void del();
void display();
void traverse();

void main()
{
   int choice, value;
   printf("\n:: Queue Implementation using Linked List ::\n");
   while(1)
   {
        printf("\n****** MENU ******\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Traverse\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

      //switch case to choose from menu
      switch(choice)
      {
        case 1: printf("Enter the value to be insert: ");
                scanf("%d", &value);
                insert(value);
                break;
        case 2: del();
                break;
        case 3: display();
                break;
        case 4: traverse();
                break;
        case 5: exit(0);
        default:printf("\nInvalid choice!!\n");
      }//end of switch
   }//end of while
}

//function to insert value in a queue.
void insert(int value)
{
   struct Node *newNode;
   newNode = (struct Node*)malloc(sizeof(struct Node));
   newNode->data = value;
   newNode -> next = NULL;
   //if it is an empty queue.
   if(front == NULL)
      front = rear = newNode;
   else
   {
      rear -> next = newNode;
      rear = newNode;
   }
   printf("\nInsertion done!!\n");
}

//function to delete value from the queue.
void del()
{
   //underflow check.
   if(front == NULL)
   {
      printf("\nQueue is Empty!!\n");
      return;
   }
   else
   {
      struct Node *temp = front;
      front = front -> next;
      printf("\nDeleted element: %d\n", temp->data);
      free(temp);
   }
}

//function to display elements of a queue.
void display()
{
   //underflow check.
   if(front == NULL)
   {
       printf("\nQueue is Empty!!\n");
       return;
   }
   else
   {
        struct Node *temp = front;
        while(temp->next != NULL)
        {
            printf("%d-->",temp->data);
            temp = temp -> next;
        }//end of while
    printf("%d-->NULL\n",temp->data);
    }//end of else
}

//function to sort elements of a queue.
void traverse()
{
    //underflow check.
   if(front == NULL)
   {
        printf("\nQueue is Empty!!\n");
        return;
   }
   else
   {
	   struct Node *temp;
       temp=(struct Node*)malloc(sizeof(struct Node));
       temp=front;
       while(temp!=NULL)
       {
           printf("%d ",temp->data);
           temp=temp->next;
       }
   }
}
