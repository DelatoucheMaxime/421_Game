/**********General includes so that the project compiles and works**********/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <sys/types.h>
#include <sys/wait.h>

/**********Prototypes of the different functions**********/

/// @brief Displaying the dices on the terminal.
/// @param dices : list of the value of the dices rolled.
int displayDices(int dices[3]);

/// @brief Checking if the Player/Computer won ([4 2 1] rolled in any order).
/// @param dices : list of the value of the dices rolled.
int isWinning(int dices[3]);

/// @brief Rolling dices and storing the values in dices
/// @param dices : list of the value of the dices to be rolled.
void fillDices(int* dices);