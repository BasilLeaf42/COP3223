// Christopher Cao
// ch282858
// COP3223 - Fall 2019

//pre-processor directives
#include <stdio.h>
#define money_per_250 250.00

//start of main function
int main()
{
    //variables
    float initial_fund = 0, total_fund = 0;
    int interest = 0, scholarships_1000 = 0, scholarships_500 = 0, scholarships_250 = 0; 
	
    //data input
    printf("How much was in the fund last year?\n");
    scanf("%f", &initial_fund);
	
    //if a negative value is entered for initial_fund
    while (initial_fund < 0)
    {
        printf("How much was in the fund last year?\n");
        scanf("%f", &initial_fund);
    }
	
    printf("What is the yearly percentage rate?\n");
    scanf("%d", &interest);
	
    //if 0 or a negative value is entered for interest
    while (interest <= 0)
    {
        printf("What is the yearly percentage rate?\n");
        scanf("%d", &interest);
    }
	
    //calculations
    total_fund = initial_fund * interest / 100;
    scholarships_250 = total_fund / money_per_250;
	
    //calculation for scholarships_1000
    while (scholarships_250 >= 4 && scholarships_1000 < 5)
    {
        scholarships_1000 = scholarships_1000 + 1;
        scholarships_250 = scholarships_250 - 4;
    }
    
    //calculation for scholarships_500
    while (scholarships_250 >= 2 && scholarships_500 < 10)
    {
        scholarships_500 = scholarships_500 + 1;
        scholarships_250 = scholarships_250 - 2;
    }
	
    //final output
    printf("\n");
    printf("%d $1000 scholarships will be awarded.\n", scholarships_1000);
    printf("%d $500 scholarships will be awarded.\n", scholarships_500);
    printf("%d $250 scholarships will be awarded.\n", scholarships_250);
	
    //end of main function
    return 0;
}
