// Christopher Cao
// ch282858
// COP 3223, Fall 2019

// pre-processor directives
#include <stdio.h>

// start of main function
int main()
{
    // variables
    int number_of_containers, number_of_paid_containers;
    float cost_per_container, total_cost;
	
    // data input
    printf("What is the cost of one container of OJ in dollars?\n");
    scanf("%f", &cost_per_container);
    printf("How many containers are you buying?\n");
    scanf("%d", &number_of_containers);
	
    // if the number of containers is even
    if (number_of_containers % 2 == 0);
	{
        number_of_paid_containers = number_of_containers / 2;
	}
	
    // if the number of containers is odd
    if (number_of_containers % 2 == 1);
	{
        number_of_paid_containers = (number_of_containers + 1) / 2;
	}
	
    // calculation
    total_cost = number_of_paid_containers * cost_per_container;
	
    // output
    printf("The total cost is $%.2f.\n", total_cost);
	
	// end of main function
	return 0;
}
