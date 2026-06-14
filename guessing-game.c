/*
    guessing game
    
*/
#include <stdio.h>

int main () {

    char user_ans;
    char  a[] = "Kisumu";
    char  b[] = "Nairobi";
    char  c[] = "Mombasa";

    printf("What is the capital of Kenya?\n A. Kisumu\n B. Nairobi\n C.Mombasa\n");
    scanf("%s", &user_ans);

    if (user_ans == 'b' || 'B') {
        printf("Correct!!\n");
    }
    else {
        printf("Wrong!! The correct answer is %s\n", b);
    }

    return 0;
}