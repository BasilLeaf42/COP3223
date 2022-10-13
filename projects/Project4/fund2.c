// Christopher Cao
// ch282858
// COP3223 - Fall 2019

//pre-processor directives
#include <stdio.h>
#define limit_negative -20000
#define limit_positive 20000

//start of main function
int main()
{ 
    //variables
    int menu_option = 0, donation_count = 0, investment_count = 0;
    float initial_fund = 0, donation = 0, investment = 0, total_fund = 0;
    
    //data input
    printf("Welcome!\n");
    printf("What is the initial balance of the fund?\n");
    scanf("%f", &initial_fund);
    
    //if initial_fund is under -$20000 or exceeds $20000
    if (initial_fund < limit_negative || initial_fund > limit_positive)
    {
        printf("\nWhat is the initial balance of the fund?\n");
        scanf("%f", &initial_fund);
    }
    
    //calculations
    total_fund = initial_fund;
	
    //while menu_option =/= 4
    while (menu_option != 4)
    {
        //data input
        printf("\nWhat would you like to do?\n");
        printf("\t1 - Make a donation\n");
        printf("\t2 - Make an investment\n");
        printf("\t3 - Print balance of fund\n");
        printf("\t4 - Quit\n");
        scanf("%d", &menu_option);
		
        //if menu_option = 1
        if (menu_option == 1)
        {
            printf("\nHow much would you like to donate?\n");
            scanf("%f", &donation);
            
            //if donation is under -$20000 or if donation exceeds $20000
            if ((donation < limit_negative) || (donation > limit_positive))
            {
                printf("You cannot make a donation of that amount.\n");
            }
			
            //if a valid value is entered for donation
            else
            {
                total_fund += donation;
                donation_count++;
            }
        }
		
        //if menu_option = 2
        if (menu_option == 2)
        {
            printf("\nHow much would you like to invest?\n");
            scanf("%f", &investment);
            
            //if investment exceeds initial fund, if investment is under -$20000, or if investment exceeds $20000
            if ((investment < limit_negative) || (investment > limit_positive) || ((total_fund - investment) < initial_fund))
            {
                printf("You cannot make an investment of that amount.\n");
            }

            //if a valid value is entered for investment
            else
            {
                total_fund -= investment;
                investment_count++;
            }
        }
		
        //if menu_option = 3
        if (menu_option == 3)
        {
            printf("\nThe current balance is $%.2f.\n", total_fund);
            printf("There have been %d donations and %d investments.\n", donation_count, investment_count);
        }
     
    }
	
    //when menu_option = 4
    printf("\nThe final balance is $%.2f.\n", total_fund);
    printf("There were %d donations and %d investments.\n", donation_count, investment_count);
    
    //end of main function
    return 0;
}
