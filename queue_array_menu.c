#include<conio.h>
#include<stdio.h>

int queue[50];
int front=-1,rear=-1;
void insert(int);
void del();
void traverse();
void search(int);
void sort();

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
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: printf("\nEnter the value of element to be inserted:");
                    scanf("%d",&val);
                    insert(val);
                    break;
			case 2: del();
					break;
			case 3: traverse();
					break;
            case 4: printf("\nEnter the value of element to be searched: ");
                    scanf("%d",&val);
                    search(val);
                    break;
            case 5: sort();
                    break;
			default:printf("Invalid choice!");
					break;
		}
		printf("\nDo you want to perform more functions(y/n): ");
		fflush(stdin);
		scanf(" %c",&ch);
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
		printf("\t%d",queue[tmp]);
		tmp++;
	};
}

//function to search an element in queue
void search(int val)
{
    int tmp=front;
	while(tmp<=rear)
    {
        if(queue[tmp]==val)
        {
            printf("\nElement found.");
        }
        tmp=tmp+1;
    }
}

//function to sort elements in a queue
void sort()
{
    int size=sizeof(queue)/sizeof(queue[0]);
    printf("%d",size);
    int i,j,a;
    for (i = 0; i<size; ++i)
    {
        for (j = i + 1; j < size; ++j)
        {
            if (queue[i] > queue[j])
            {
                    a =  queue[i];
                    queue[i] = queue[j];
                    queue[j] = a;
            }

        }

    }
    printf("The numbers arranged in ascending order are given below \n");
    for (i=0; i<size ; ++i)
    {
        if(queue[i]!=0)
        {
			printf("%d", queue[i]);
        }
    }
}
