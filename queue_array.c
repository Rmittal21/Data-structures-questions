#include<conio.h>
#include<stdio.h>

int queue[50];
int front=-1,rear=-1;
void insert(int);
void del();
void traverse();

void main()
{
	int choice,val;
	char ch;
	//menu for operations on queue using arrays
	printf("**** MENU ****");
	printf("\n1. Insert");
	printf("\n2. Delete");
	printf("\n3. Traverse");
	printf("\n4. Search");
	printf("\n5. Sort");
	do
	{
		printf("\nSelect the function to be performed(1-5): ");
		scanf("%d",choice);
		switch(choice)
		{
			case 1:	printf("\nEnter the value of element to be inserted:");
					scanf("%d",&val);
					insert(val);
					break;
			case 2: del();
					break;
			case 3: traverse();
					break;
			default:printf("Invalid choice!");
					break;
		}
		printf("\nDo you want to perform more functions(y/n): ");
		scanf("%c",ch);
	}while(ch=='y');
	//end of do-while
	getch();
}

//function to insert an element in queue
void insert(int val)
{
	if(rear>=49)
	{
		printf("\nOverflow");
		return;
	}
	if(front==-1)
	{
		front=rear=0;
		queue[rear]=val;
	}
	else
	{
		rear=rear+1;
		queue[rear]=val;
	}
}

//function to delete an element from queue
void del()
{
	if(front<0)
	{
		printf("Underflow");
		return;
	}
	if(front==rear)
	{
		queue[front]='\0';
		front=rear=-1;
	}
	else
	{
		queue[front]='\0';
		front=front+1;
	}
}

//function to traverse in a queue
void traverse()
{
	int tmp=front;
	if(front<0)
	{
		printf("Underflow");
		return;
	}
	while(tmp<=rear)
	{
		printf("%d",queue[tmp]);
		tmp++;
	};
}
