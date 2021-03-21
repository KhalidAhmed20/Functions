
/*
==============================================================================
 Program to return the NUMBER of occurrence of a number in a given array
 and return the index of LAST occurrence of a number
==============================================================================
*/



#include <stdio.h>
#include <stdlib.h>



// Function to return the number occurrence of a number in a given array..
int Find_occurrence(const int array[],int element,int n);

// function to return the index of LAST occurrence of a number in a given array
int Find_Last(const int *arr,int element,int n);


int main()
{
    int s;
    printf("Enter the Array size: \n");
    scanf("%d" , &s);
    int array[s];
    int i, repeat , last_occur , element  ;
    printf("Enter your array: \n");
    for(i=0 ; i<s ; i++)
    {
        scanf("%d" , &array[i]);
    }
    printf("enter the element for search: ");
    scanf("%d" , &element);
    repeat = Find_occurrence(array,element,s);
    last_occur = Find_Last(array,element,s);
    if(repeat == 0 && last_occur == -1)
    {
        printf("\nElement not found\n");
    }
    else
    {
        printf("\nThe element repeated (%d) times\n",repeat);
        printf("\nThe last occurrence of the element is in index: %d\n",last_occur);
    }
    return 0;
}

int Find_occurrence(const int array[],int element,int n)
{
    int i , occur = 0;
    for(i=0 ; i<n ; i++){
        if(element == array[i]){
            occur++;
        }
    }
    return occur; //element is not found
}

int Find_Last(const int *arr,int element,int n)
{
    int i;
	int index = -1;
    for(i=0 ; i<n ; i++)
	{
        if(element == arr[i])
		{
			index = i;
		}
    }
    return index;
}
