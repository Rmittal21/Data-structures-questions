#include<stdio.h>

int main()
{
    int array[10],size,l1,l2,i,temp;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    printf("\nEnter the elements of the array:\n");

    //taking array elements from the user.
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }

    //displaying array elements.
    printf("\nThe elements of array are:\n");
    for(i=0;i<size;i++)
    {
        printf("%d  ",array[i]);
    }

    /*let l1 and l2 are largest and
     second largest numbers in the array*/
    l1=array[0];
    l2=array[1];

    if(l2>l1)
    {
        temp=l2;
        l2=l1;
        l1=temp;
    }
    for(i=2;i<size;i++)
    {
        if(l1<array[i])
        {
            temp=l1;
            l1=array[i];
            array[i]=temp;
        }
        else if(array[i]>l2 && array[i]!=l1)
            {
                l2=array[i];
            }
    }

    printf("\n\nLargest and second largest elements of array are %d and %d respectively.",l1,l2);
    return 0;
}
