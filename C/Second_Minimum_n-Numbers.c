////////////////////////////////////////////////////////////////////////////////////////////////////
//Description: This program will give you second minimum number among n-Numbers .                 //
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
#include<limits.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////////
//Second_Minimum_n_Number() Function: This function gives second minimum number among n values .  //
//================================================================================================//
//Parameters:                                                                                     //
//1. int[](piArray1) : The address of array to perfrom addition of n-Numbers .                    //
//2. int(iLength)   : The size of the array .                                                     //
//================================================================================================//
//Return: int                                                                                     //
//================================================================================================//
//Local variables:                                                                                //
//1. int(iCnt)       : The variable to store the count of digits .                                //
//2. int(iSec_Min)   : The variable to store the second minimum number .                          //
//3. int(iMin)       : The variable to store the minimum number .                                 //
////////////////////////////////////////////////////////////////////////////////////////////////////
int Second_Minimum_n_Number(int piArray1[],int iLength)
{
    int iCnt = 0,iSec_Min = INT_MAX,iMin = INT_MAX;

    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        if(iMin > piArray1[iCnt])
        {
            iSec_Min = iMin;
            iMin = piArray1[iCnt];
        }
        else if((iSec_Min > piArray1[iCnt]) && (iMin < piArray1[iCnt]))
        {
            iSec_Min = piArray1[iCnt];
        }
    }

    return iSec_Min;
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


        iRet = Second_Minimum_n_Number(piArray,iSize);
        printf("Second Minimum among all of n-Numbers is : %d\n",iRet);

        printf("Would you like to try Second_Minimum_n_Number one more time? >Press for->YES:ANY_NUM OR NO:0 <=>Your Choice : ");
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