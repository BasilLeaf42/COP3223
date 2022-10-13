// Christopher Cao
// ch282858
// COP 3223, Fall 2019

// Arup Guha
// 8/17/2015
// Secret Messages (Strings)

// Modified by Sarah Angell
// 3/16/2016
// Added print statement to printText function
// for uniformity in submissions

#include <stdio.h>
#include <string.h>

#define MAX_LEN 14

long long convert(char word[], int length);
void printText(long long value, int length);

int main()
{
    int choice;
    printf("Would you like to (1) encode or (2) decode?\n");
    scanf("%d", &choice);
	
    // Encode.
    if (choice == 1)
	{
        // Get input file name.
        char filename[MAX_LEN];
        printf("Please enter the input file name, to encode.\n");
        scanf("%s", filename);
        FILE* ifp = fopen(filename, "r");
		
        // Convert each word, one by one.
        while (!feof(ifp))
		{
            char word[MAX_LEN];
            fscanf(ifp, "%s", word);
            int len = strlen(word);
            long long res = convert(word, len);
            printf("%lld %d\n", res, len);
        }
		
        fclose(ifp);
    }
	
    else
	{
        // Get input file name.
        char filename[MAX_LEN];
        printf("Please enter the input file name, to decode.\n");
        scanf("%s", filename);
        FILE* ifp = fopen(filename, "r");
		
        // Convert each pair of numbers, one by one.
        while (!feof(ifp))
		{
            long long value;
            int len;
            fscanf(ifp, "%lld%d", &value, &len);
            printText(value, len);
        }
		
        fclose(ifp);
    }
	
    return 0;
}

//encodes message
long long convert(char word[], int length)
{
    //variable declaration
    long long value = 0;
    int i;
	
    //loop to encode message
    for (i = 0; i < length; i++)
    {
        value = (26 * value) + (word[i] - 'A');
    }
	
    return value;  
}

//decodes message
void printText(long long value, int length)
{

    //variable declaration
    int i, remainder;
    char word[length];
	
    //initialize word array
    word[length] = '\0';
	
    //loop to decode message
    for(i = 0; i < length; i++)
    {
        remainder = value % 26;
        value = value / 26;
        word[length - i - 1] = (char) (remainder + 65);
    }
	
    //output
    printf("%s\n", word);
    return;
}
