/**********including function header**********/
#include "functions/functions.h"

/**********Main function**********/
int main(void)
{
    //Clearing the terminal and launching the game
    printf("*********421 Simulator*********\n");

    int test1[3] = {2,6,5};
    int test2[3] = {2,4,1};

    displayDices(test1);
    displayDices(test2);

    printf("Test of the winning function:\n");
    printf("\tTest1 : %d, %d\n", 100*test1[0]+10*test1[1]+test1[2], isWinning(test1));
    printf("\tTest1 : %d, %d\n", 100*test2[0]+10*test2[1]+test2[2], isWinning(test2));

    return EXIT_SUCCESS;
}