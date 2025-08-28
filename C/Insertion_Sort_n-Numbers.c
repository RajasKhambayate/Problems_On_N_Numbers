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

////////////////////////////////////////////////////////////////////////////////////////////////////
//Insertion_Sort_n_Number() Function: This function sorts the unsorted array or n-Number .        //
//================================================================================================//
//Parameters:                                                                                     //
//1. int[](piArray1) : The address of array to perfrom addition of n-Numbers .                    //
//2. int(iLength)   : The size of the array .                                                     //
//================================================================================================//
//Return: void                                                                                    //
//================================================================================================//
//Local variables:                                                                                //
//1. int(iIterator1) : variable to iterate through the loop                                       //
//2. int(iIterator2) : variable to iterate through the loop                                       //
//3. int(iSelected)  : variable to iterate through the loop                                       //
////////////////////////////////////////////////////////////////////////////////////////////////////
void Insertion_Sort_n_Number(int piArray1[],int iLength)
{
    int iIterator1 = 0,iIterator2 = 0,iSelected = 0;

    for(iIterator1 = 1;iIterator1 < iLength;iIterator1++)
    {
        for(iIterator2 = (iIterator1 - 1),iSelected = piArray1[iIterator1];(iIterator2 >= 0) && (piArray1[iIterator2] > iSelected);iIterator2--)
        {
            piArray1[iIterator2 + 1] = piArray1[iIterator2];
        }

        piArray1[iIterator2 + 1] = iSelected;
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
                printf("Please enter a single whole number : ");
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

        Insertion_Sort_n_Number(piArray,iSize);

        printf("Sorted Array is : \n");
        for(iCnt = 0;iCnt < iSize;iCnt++)
        {
            printf("%d\t",piArray[iCnt]);
        }printf("\n");

        printf("Would you like to try Insertion_Sort_n_Number one more time? >Press for->YES:ANY_NUM OR NO:0 <=>Your Choice : ");
        while((!(scanf("%d",&iSize))) || (getchar() != '\n'))
        {
            printf("Please enter 0 or 1 only : ");
            while(getchar() != '\n');
        }

        if(iSize == 0)
        {
            printf("====================================================================================================\n");
            printf("Thank you for using Rajas's Insertion_Sort_n_Number program .\n");
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