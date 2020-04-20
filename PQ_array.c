#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 20

int intArray[MAX];
int itemCount = 0;

//to check underflow
bool isEmpty()
{
    return itemCount == 0;
}

//to check overflow
bool isFull()
{
    return itemCount == MAX;
}

int size()
{
    return itemCount;
}

//function to insert element in priority queue.
void insert(int data)
{
    int i = 0;
    if(!isFull())
    {
        //if queue is empty, insert the data
        if(itemCount == 0)
        {
            intArray[itemCount++] = data;
        }
        else
        {
            //start from the right end of the queue
			for(i = itemCount - 1; i >= 0; i-- )
			{
                // if data is larger, shift existing item to right end
                if(data > intArray[i])
                    intArray[i+1] = intArray[i];
                else
                    break;
            }
			// insert the data
            intArray[i+1] = data;
            itemCount++;
        }//end of else
    }//end of if
    else
        printf("Queue is full!\n");
}

int removeData()
{
   if(!isFull())
        return intArray[--itemCount];
    else
        printf("Queue is empty!!");
}

int main()
{
    int choice,val,i;
    char ch;
    printf("\n**** MENU ****\n");
	printf("1.Insertion\n");
	printf("2.Deletion\n");
	printf("3.Print\n");

	do
	{
		printf("Select the function to be performed(1-6): ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:	printf("\nEnter the value of element to be inserted: ");
                    scanf("%d",&val);
                    insert(val);
					break;
			case 2: removeData();
                    break;
			case 3: printf("\nElements of queue are:\n");
                    for(i=0;i<size();i++)
                    {
                        printf("%d ",intArray);
                    }
					break;
			default:printf("Invalid choice!");
					break;
		}
		printf("\nDo you want to perform more functions(y/n): ");
		fflush(stdin);
		scanf("%c",&ch);
	}while(ch=='y');

}
