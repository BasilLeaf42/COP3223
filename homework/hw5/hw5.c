// Christopher Cao
// ch282858
// COP 3223, Fall 2019

// pre-processor directives
#include <stdio.h>

// start of main function
int main()
{
    // variable declaration
	int num_rows, num_symbols, i, j;
	
	// prompt user input
    printf("How many rows for your star design?\n");
    scanf("%d", &num_rows);
    printf("How many stars on the first row?\n");
    scanf("%d", &num_symbols);
    
    // loop for number of rows
    for (i = 0; i < num_rows; i++)
    {
        // loop for the minimum number of stars in each row
        for (j = 0; j < num_symbols; j++)
        {
            // if the row number is odd
            if (i % 2 == 0)
			{
                printf("*");
			}

            // for all other stars in the row
            for (j = 1; j < num_symbols; j++)
			{
                printf(" *");
			}
        }
        // start of new row
        printf("\n");
    }

    // end of main function
    return 0;
}
