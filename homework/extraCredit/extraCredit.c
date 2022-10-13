// Christopher Cao
// ch282858
// COP 3223, Fall 2019

//pre-processor directives
#include <stdio.h>
#include <string.h>

//main function
int main(int argc, char** argv)
{
    //variable declaration
    int i, key = 0xBA55C1EF;
    char *encryption = argv[1], temp;
    
    //output string attack
    printf("String attack:\n");
    printf("%c", encryption);
    
    //loop to encrypt message
    for (i = 0; i < strlen(encryption); i++)
    {
        temp = encryption[i];
        encryption[i] = temp ^ key;
    }

    //output encrypted message
    printf("\n");
    printf("Encrypted message:\n");
    printf("%c", encryption);

    //end of main function
    return 0;
}
