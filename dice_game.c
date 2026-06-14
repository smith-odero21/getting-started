
/* dice game */
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>


int myRandom(int max){
    int x;
    x = rand() % max + 1;

    return x;

}

int main() {

    int bet , balance, guess, dice;
    balance = 100;
    int attempts = 0;

    srand(getpid());

    while (attempts < 5) {
        printf("Place your bet: (Attempt %d): ", attempts + 1);
        fflush(stdout);
        scanf("%d.shs", &bet);

        if (bet > balance || balance == 0){
                printf("Insufficient funds. You cannot bet %d.shs with a balance of %d.shs\n", bet, balance);
                sleep(2);
                printf("GAME OVER!!!\n");
                return 0;
            }

        printf("Guess a number: ([1-6] press 0 to exit)\n");
        scanf("%d", &guess);
        printf("Analyzing guess....\n");
        sleep(2);
        printf("Exited\n");
        if (guess == 0 || guess > 6)
            return 0;
        
        sleep(2);

        dice = myRandom(6);

        if (guess != dice){
            balance -= bet;
            attempts++;
            
            if (attempts == 5) {
                printf("\nYou failed 3 attempts! Game Over.\n");
                // The loop naturally ends here because attempts is now 3
            } else {
                printf("\nTry again.\n");
            }

        }
        else {
            bet *= 2;
            balance += bet;
            printf("\nCongratulations , you've won\n");
    
        }
        

        printf("Your balance is %d.shs\n", balance);

        printf("\nResult %d\n", dice);
    }

    return 0;
}