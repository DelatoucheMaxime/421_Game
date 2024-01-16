/**********including function header**********/
#include "functions.h"

/**********functions implementation**********/

int displayDices(int dices[3])
{
    printf("\t1st value: %d\t2nd value: %d\t3rd value: %d", dices[0], dices[1], dices[2]);
    return EXIT_SUCCESS;
}


int isWinning(int dices[3])
{
    int bool_isWinning = 0;
    int value = 100*dices[0] + 10*dices[1] + dices[2];
    int possible_outcome[6] = {421, 412, 124, 142, 241, 214};

    int i = 0;
    while(!bool_isWinning && i <= 6)
    {
        if(possible_outcome[i] == value)bool_isWinning = 1;
        else i++;
    }

    return bool_isWinning;
}


void fillDices(int* dices)
{
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    

    srand((time_t)ts.tv_nsec);
    for(int i=0; i<3; i++)dices[i] = rand()%6+1;
}