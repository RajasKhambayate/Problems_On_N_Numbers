////////////////////////////////////////////////////////////////////////////////////////////////////
//Description: This program add all n numbers the number within a array .                         //
//================================================================================================//
//Language: C                                                                                     //
//Compiler : GNU GCC                                                                              //
//IDE: Visual Studio code                                                                         //
//================================================================================================//
//Author/Coder: Rajas Khambayate                                                                  //
//Date: 25th May 2025                                                                             //
//Day: Sunday                                                                                     //
////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<limits.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////////
//Summation_n-Numbers() Function: This function adds all number in a array .                      //
//================================================================================================//
//Parameters:                                                                                     //
//1. int[](pArray1) : The address of array to perfrom addition of n-Numbers .                     //
//2. int(iLength)   : The size of the array .                                                     //
//================================================================================================//
//Return: int                                                                                     //
//================================================================================================//
//Local variables:                                                                                //
//1. int(iCnt)         : The variable to store the count of digits .                              //
//2. int(iSummation)   : The variable to store the summation of digits .                          //
////////////////////////////////////////////////////////////////////////////////////////////////////
int Summation_n_Numbers(int pArray1[],int iLength)
{
    int iCnt = 0,iSummation = 0;

    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        iSummation += pArray1[iCnt];
    }

    return iSummation;
}

//Starting point of the program
int main()
{
    int iSize = 0,iCnt = 0,iRet = 0;
    int *piArray = NULL;

    while(1)
    {
        printf("Please enter the size of n : ");
        while(iSize < 2)
        {
            while((!(scanf("%d",&iSize))) || (getchar() != '\n'))
            {
                printf("Please enter a single whole number : ");
                while(getchar() != '\n');
            }

            if(iSize < 2)
            {
                printf("Please enter size greater than 1 : ");
            }
        }

        piArray = (int *)malloc(iSize * sizeof(int));

        printf("Please enter the n-numbers : ");
        for(iCnt = 0;iCnt < iSize;iCnt++)
        {
            while((!(scanf("%d",&piArray[iCnt]))) || (getchar() != '\n'))
            {
                printf("Please enter a single whole number : ");
                while(getchar() != '\n');
            }
        }

        iRet = Summation_n_Numbers(piArray,iSize);
        printf("Summation of n-Numbers is : %d\n",iRet);

        printf("Would you like to try Selection_Sort_n_Number one more time? >Press for->YES:ANY_NUM OR NO:0 <=>Your Choice : ");
        while((!(scanf("%d",&iSize))) || (getchar() != '\n'))
        {
            printf("Invalid input. Please enter 0 or 1 only : ");
            while(getchar() != '\n');
        }

        if(iSize == 0)
        {
            printf("====================================================================================================\n");
            printf("Thank you for using Rajas's Second_Minimum_n_Number program .\n");
            break;
        }
        else
        {
            printf("====================================================================================================\n");
            iSize = -1;
            continue;
        }
    }

    return 0;
}