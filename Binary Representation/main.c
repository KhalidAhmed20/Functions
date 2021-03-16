#include <stdio.h>
#include <stdlib.h>


/* Declaration of Functions that will be used in this program */

void print_Binary(int num);
void number_of_ones_zeros(int num);

int main()
{
    int input;
    printf("Please Enter Number : ");
    /* enter the required number */
    scanf("%d",&input);
    printf("\n");

    /* display number binary representation */
    print_Binary(input);

    /* display number of ones and zeros in the entered number */
    number_of_ones_zeros(input);
    return 0;
}

/* Description :
 * function is printing the binary representation for any integer number */

void print_Binary(int num)
{
    int i , mask = 0x80000000;
    printf("The Binary Representation of number %d is : ",num);
    for(i = 0 ; i < 32 ; i++)
    {
        ((num << i)& mask) ? printf("1"): printf("0");
    }
    printf("\n");
}

/* Description :
 * function is printing the number of ones and zeros in the binay number */

void number_of_ones_zeros(int num)
 {
    int i , mask = 0x80000000;
    int num_of_ones = 0 , num_of_zeros = 0;
    for(i = 0 ; i < 32 ; i++)
    {
        ((num << i)& mask) ? ++num_of_ones : ++num_of_zeros;
    }
    printf("Number of ones inside the integer number %d is %d\n",num,num_of_ones);
    printf("Number of zeros inside the integer number %d is %d\n",num,num_of_zeros);
 }

