// Christopher Cao
// ch282858
// COP3223 - Fall 2019

//pre-processor directives
#include <stdio.h>

//start of main function
int main()
{
    //variable declaration
    int loops_performed_auctions = 0, loops_performed_bids = 0, auction_number = 0, bid_number = 0, bid_amount = 0, highest_bid = 0;
    float total_raised = 0.0;
    char file_name[30];
	
    //data input
    printf("Please enter the name of the auction file.\n");
    scanf("%s", file_name);
    printf("\n");
	
    //file pointer
    FILE *ifp;
    ifp = fopen(file_name, "r");
	
    fscanf(ifp, "%d", &auction_number);
	
    //loop for each auction
    for (loops_performed_auctions = 0; loops_performed_auctions < auction_number; loops_performed_auctions++)
    {
        fscanf(ifp, "%d", &bid_number);
		
        for (loops_performed_bids = 0; loops_performed_bids < bid_number; loops_performed_bids++)
        {
            fscanf(ifp, "%d", &bid_amount);

            if(bid_amount > highest_bid)
            {
                highest_bid = bid_amount;
            }
        }
		
        //loop for highest bid of each auction
        total_raised += highest_bid;
        printf("Auction #%d was sold for $%.2f!\n", loops_performed_auctions+1, (float)highest_bid);
        highest_bid = 0;
    }
	
    //final output
    printf("\nThe silent auction raised $%.2f for charity!\n", total_raised);
	
    //end of main function
    fclose(ifp);
    return 0;
}
