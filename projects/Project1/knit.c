// Christopher Cao
// ch282858
// COP3223 - Fall 2019

//pre-processor directives
#include <stdio.h>
#define yarn_for_hat 225
#define yarn_for_sweater 450

//start of main function
int main()
{
    //variables
    int number_of_balls, yards_per_ball, total_yarn, total_hats, total_sweaters;
	
    //data input for number_of_balls
    printf("It takes 225 yards to make a hat and 450 yards to make a sweater.\nIf the user has 500 total yards, they would be able to make two hats or one sweater.\nHow many balls of yarn do you have?\n");
    scanf("%d", &number_of_balls);
	
    //if 0 or a negative value is entered for number_of_balls
    while (number_of_balls <= 0)
    {
        printf("How many balls of yarn do you have?\n");
        scanf("%d", &number_of_balls);
    }
	
    //data input for yards_per_ball
    printf("How many yards are in each ball of yarn?\n");
    scanf("%d", &yards_per_ball);
	
    //if 0 or a negative value is entered for yards_per_ball
    while (yards_per_ball <= 0)
    {
        printf("How many yards are in each ball of yarn?\n");
        scanf("%d", &yards_per_ball);
    }
	
    //calculations
    total_yarn = number_of_balls * yards_per_ball;
    total_hats = total_yarn / yarn_for_hat;
    total_sweaters = total_yarn / yarn_for_sweater;
	
    //output
    printf("You can make %d hats or %d sweaters.\n", total_hats, total_sweaters);
	
	//end of main function
	return 0;
}
