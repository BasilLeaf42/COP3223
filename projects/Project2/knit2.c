// Christopher Cao
// ch282858
// COP3223 - Fall 2019

//pre-processor directives
#include <stdio.h>
#include <math.h>
#define squares_per_blanket 60
#define time_interval 7

//start of main function
int main()
{
    //variables
    int initial_knitters, total_squares, total_blankets, leftover_squares;
    float new_knitters, rate_of_knitters;
	
    //data input for initial_knitters
    printf("How many people are knitting blanket squares at the beginning of the week?\n");
    scanf("%d", &initial_knitters);
	
    //if 0 or a negative value is entered for initial_knitters
    while (initial_knitters <= 0)
    {
        printf("How many people are knitting blanket squares at the beginning of the week?\n");
        scanf("%d", &initial_knitters);
    }
	
    //data input for new_knitters
    printf("How many new people are knitting blanket squares each day?\n");
    scanf("%f", &new_knitters);
	
    //if 0 or a negative value is entered for new_knitters
    while (new_knitters <= 0)
    {
        printf("How many new people are knitting blanket squares each day?\n");
        scanf("%f", &new_knitters);
    }
	
    //calculations
    rate_of_knitters = 1 + new_knitters;
    total_squares = initial_knitters * pow(rate_of_knitters, time_interval);
    total_blankets = total_squares / squares_per_blanket;
    leftover_squares = total_squares % squares_per_blanket;
	
    //output
    printf("%d blanket squares will be made this week!\nYou will be able to make %d blankets and start next week with %d squares.\n", total_squares, total_blankets, leftover_squares);
	
	//end of main function
	return 0;
}
