#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int num, secretNum = 20;
    char wannaPlay[4];

    printf("Hello welcome to the guess game.\n");

    for (int i = 0; i < 5; i++) {
        printf("Enter your guess:");
        scanf("%d", &num);

        if (num > secretNum) {
            printf("Your guess is greater, try again.\n");

        } else if (num < secretNum) {
            printf("Your guess is less, try again.\n");

        } else {
            printf("You win!\n");
            printf("Do you want to play again? (yes/no): ");
            scanf("%s", wannaPlay);

            if (strcmp(wannaPlay, "yes") == 0) {
                secretNum = rand() % 100;
                i = -1; // reset loop counter
            } else {
                break;
            }
        }
    }

    return 0;
}
