// Christopher Cao
// ch282858
// COP 3223, Fall 2019

// pre-processor directives
#include <stdio.h>
#define cals_per_gr_protein 4
#define cals_per_gr_carb 4
#define cals_per_gr_fat 9

// main function
int main()
{
    // variable declaration
    int gr_protein, gr_carb, gr_fat, total_cal;
	
    //positive input only
	
    // data input
    printf("How many grams of protein did you eat?\n");
    scanf("%d", &gr_protein);
    printf("How many grams of carbohydrates did you eat?\n");
    scanf("%d", &gr_carb);
    printf("How many grams of fat did you eat?\n");
    scanf("%d", &gr_fat);
	
    // calculate
    total_cal = gr_protein * cals_per_gr_protein + gr_carb * cals_per_gr_carb + gr_fat * cals_per_gr_fat ;
	
    // output
    printf("You ate %d calories of food.\n", total_cal);
	
	return 0;
}
