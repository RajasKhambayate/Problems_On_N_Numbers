////////////////////////////////////////////////////////////////////////////////////////////////////
//Description: This program sorts the unsorted array or n-Numbers .                               //
//================================================================================================//
//Language: C                                                                                     //
//Compiler : GNU GCC                                                                              //
//IDE: Visual Studio code                                                                         //
//================================================================================================//
//Author/Coder: Rajas Khambayate                                                                  //
//Date: 26th May 2025                                                                             //
//Day: Monday                                                                                     //
////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////////////////////////////
//Bubble_Sort_n_Number() Function: This function sorts the unsorted array or n-Number .           //
//================================================================================================//
//Parameters:                                                                                     //
//1. int[](piArray1) : The address of array to perfrom addition of n-Numbers .                    //
//2. int(iLength)   : The size of the array .                                                     //
//================================================================================================//
//Return: void                                                                                    //
//================================================================================================//
//Local variables:                                                                                //
//1. int(iIterator1) : variable to iterate through the outer loop (passes)                        //
//2. int(iIterator2) : variable to iterate through the inner loop (comparisons)                   //
//3. int(iTemp)      : variable to swap values                                                    //
//4. bool(bSwap)     : variable to check if a swap occurred in a pass.                            //
////////////////////////////////////////////////////////////////////////////////////////////////////
void Bubble_Sort_n_Number(int piArray1[],int iLength)
{
    int iIterator1 = 0,iIterator2 = 0,iTemp = 0;
    bool bSwap = false;

    for(iIterator1 = 0;iIterator1 < iLength;iIterator1++)
    {
        bSwap = false;

        for(iIterator2 = 0;iIterator2 < (iLength - iIterator1 - 1);iIterator2++)
        {
            if(piArray1[iIterator2] > piArray1[iIterator2 + 1])// if(piArray1[iIterator2] < piArray1[iIterator2 + 1])  ------> For Decreasing Order Sort
            {
                iTemp = piArray1[iIterator2];
                piArray1[iIterator2] = piArray1[iIterator2 + 1];
                piArray1[iIterator2 + 1] = iTemp;
                bSwap = true;
            }
        }

        if(bSwap == false)
        {
            break;
        }
    }
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
                printf("Please enter a integer : ");
                while(getchar() != '\n');
            }

            if(iSize < 2)
            {
                printf("Please enter size greater than 1\n");
            }
        }

        piArray = (int*)malloc(iSize * sizeof(int));

        printf("Please enter the n-numbers : ");
        for(iCnt = 0;iCnt < iSize;iCnt++)
        {
            while((!(scanf("%d",&piArray[iCnt]))) || (getchar() != '\n'))
            {
                printf("Please enter a single whole number : ");
                while(getchar() != '\n');
            }
        }

        Bubble_Sort_n_Number(piArray,iSize);

        printf("Sorted Array is : \n");
        for(iCnt = 0;iCnt < iSize;iCnt++)
        {
            printf("%d\t",piArray[iCnt]);
        }printf("\n");

        printf("Would you like to try Bubble_Sort_n_Number one more time? >Press for->YES:ANY_NUM OR NO:0 <=>Your Choice : ");
        while((!(scanf("%d",&iSize))) || (getchar() != '\n'))
        {
            printf("Please enter 0 or 1 only : ");
            while(getchar() != '\n');
        }

        if(iSize == 0)
        {
            printf("====================================================================================================\n");
            printf("Thank you for using Rajas's Bubble_Sort_n_Number program .\n");
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