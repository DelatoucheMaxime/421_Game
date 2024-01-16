/**********including function header**********/
#include "functions/functions.c"

/**********Main function**********/
int main(int argc, char* argv[])
{
    //Checking for a valid call
    if(argc != 2)
    {
        printf("Not enough Argument given. Try : ./421_Game [number_of_win]\n");
        exit(EXIT_FAILURE);
    }

    //Clearing the terminal
    pid_t pid = fork();
    int status;

    if(pid != 0)
    {
        pid = waitpid(pid, &status, WUNTRACED | W_OK);
        if(pid == -1)
        {
            perror("waitpid");
            exit(EXIT_FAILURE);
        }
    }
    else
    {
        execlp("clear", "clear", NULL);
    }

    //Launching the game
    printf("*********421 Simulator*********\n");

    int N = atoi(argv[1]);
    int number_of_win = 0;
    float ave = 0;
    int dices[3];
    fillDices(dices);
    int attempt = 0;

    //Trying to get the 421 and checking the number of attempt
    while(number_of_win != N)
    {
        fillDices(dices);
        displayDices(dices);
        printf("\tAttempt: %d\tNumber of wins: %d\n", attempt, number_of_win);
        if(!isWinning(dices))
        {
            attempt++;
        }
        else
        {
            number_of_win++;
            ave += attempt;
            attempt = 0;
        }
    }

    ave /= N;
    
    printf("\nNumber of wins asked: %d\n", N);
    printf("Number of wins got: %d\n", number_of_win);
    printf("Average number of attempt: %f\n", ave);

    return EXIT_SUCCESS;
}