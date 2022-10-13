// Christopher Cao
// ch282858
// COP 3223, Fall 2019

// Arup Guha
// 9/9/2012
// Edited on 8/17/2015 to be scaffold for COP 3223 Lab Program on Sorting.

// Modifed by Sarah Angell
// 3/18/2016
// Added file input for Homework 12

#include <stdio.h>

#define SIZE 5
#define PRINT 1

void swap(int* ptrA, int*ptrB);
void print(int array[], int length);
void fillArray(int array[], int length);
void GnomeSort(int gnomes[], int length);
int isSorted(int array[], int length);

int main()
{
    int a[SIZE];
	
    fillArray(a, SIZE);
    if (PRINT) print(a, SIZE);
    GnomeSort(a, SIZE);
    if (PRINT) print(a, SIZE);
	
    // Print out the final result.
    if (isSorted(a, SIZE))
	{
        printf("The sort worked properly.\n");
	}
	
    else
	{
        printf("There was a problem with the sort.\n");
	}
	
    return 0;
}

// Prints out values in array[0]...array[length-1].
void print(int array[], int length)
{
    int i;
	
    for (i = 0; i < length; i++)
	{
        printf("%d ", array[i]);
	}
	
    printf("\n");
	
    return;
}


// Sorts the items array[0] through array[length-1] using the Gnome Sort algorithm.
void GnomeSort(int gnomes[], int length)
{
    /*** FILL IN YOUR CODE HERE ***/
    //variable initialization
    int pos = 1, temp;
	
    //loop to read each value in the array
    while (pos < length)
    {
        if (gnomes[pos] >= gnomes[pos - 1])
        {
            pos++;
        }
		
        //loop to swap values in the array
        else
        {
            temp = gnomes[pos - 1];
            gnomes[pos - 1] = gnomes[pos];
            gnomes[pos] = temp;
			
            if (pos > 1)
            {
                pos--;
            }
        }
    }
	
    //end of void function
    return;
}

// Swaps the variables pointed to by ptrA and ptrB.
void swap(int* ptrA, int* ptrB)
{
    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;
	
    return;
}

// Fills array[0] through array[length-1] with integers
// from a specified file
void fillArray(int array[], int length)
{
    int i;
    char filename[20];
    FILE * ifp = NULL;
	
    printf("What is the name of the file?\n");
    scanf("%s", filename);
    ifp = fopen(filename, "r");
	
    for (i = 0; i < length; i++)
	{
        fscanf(ifp, "%d", &array[i]);
	}
	
    fclose(ifp);
	
    return;
}

// Returns 1 iff array[0] through array[length-1] are
// in sorted order from smallest to largest.
int isSorted(int array[], int length)
{
    int i;
	
    // Return false if a pair of consecutive values is out of order.
    for (i = 0; i < length - 1; i++)
	{
        if (array[i] > array[i + 1])
		{
            return 0;
		}
	}
	
    return 1;
}
