#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int num, secretNum = rand() % 100;
    char wannaPlay[4];

    printf("Hello welcome to the guess game.\n");

    while (1){
        for (int i = 1; i < 6; i++) {
            printf("Round %d: Enter your guess:", i);
            scanf("%d", &num);

            if (num > secretNum) {
                printf("Your guess is greater, try again.\n");

            } else if (num < secretNum) {
                printf("Your guess is less, try again.\n");

            } else {
                printf("You win!\n");
                break;
            }
        }

        printf("The secret number was: %d\n", secretNum);
        printf("Do you want to play again? (yes/no): ");
        scanf("%s", wannaPlay);

        if (strcmp(wannaPlay, "yes") == 0) {
            secretNum = rand() % 100;
        } else {
            break;
        }
    }

    printf("Thanks for playing!\n");

    return 0;
}
