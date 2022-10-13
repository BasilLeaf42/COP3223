// Christopher Cao
// ch282858
// COP 3223, Fall 2019

//pre-processor directives
#include <stdio.h>
#define amount_due 10.00

// start of main function
int main()
{
    // variables
    float weight_of_oj, cost_per_container, oj_taken, cost_per_oz, total_due;
    int times_oj_taken, loops_performed;
	
    printf("What is the weight (in oz.) of the original container of OJ?\n");
    scanf("%f", &weight_of_oj);
    
    printf("What is the cost of the original container of OJ in dollars?\n");
    scanf("%f", &cost_per_container);
	
    printf("How many times did your roommate take your juice?\n");
    scanf("%d", &times_oj_taken);
	
    // calculation
    cost_per_oz = cost_per_container / weight_of_oj;
	
    // start of for loop
    for (loops_performed = 0; loops_performed < times_oj_taken; loops_performed++)
    {
        printf("How much juice did your roommate take this time (in oz.)?\n");
        scanf("%f", &oj_taken);
        total_due += cost_per_oz * oj_taken;
        
        if (total_due >= amount_due)
        {
            printf("Your roommate owes you $%.2f.\n", amount_due);
            total_due = total_due - amount_due;
        }
    }
	
    // final output
    printf("Your roommate owes you $%.2f.\n", total_due);
	
    // end of main function
    return 0;
}
