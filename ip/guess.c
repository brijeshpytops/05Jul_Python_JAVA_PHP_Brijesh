#include <stdio.h>

int main() {
    int wn = 76, gn;
    int guess_count  = 0;
    int flag = 1;
    int is_first_time = 1;
    int is_play_flag = 0;

    while(flag){
        if (is_first_time){
            printf("Guess a number: ");
            scanf("%d", &gn);
            is_first_time = 0;
        }else{
            printf("Guess again: ");
            scanf("%d", &gn);
        }

        if (wn == gn){
            guess_count++;
            printf("Congrets, you win!!!\n");
            printf("You have guessed a number after guessing %d times\n\n", guess_count);

            guess_count = 0;

            printf("For play continue? Press 1\n");
            printf("For play don't want to continue? Press 0\n");
            printf("Preess 0 or 1? ");
            scanf("%d", &is_play_flag);
            is_first_time = 1;

            if (!is_play_flag){
                printf("See you next time.✋");
                flag = 0;
                break;
            }
        }else{
            if (gn < wn){
                printf("Too low\n\n");
            }else{
                printf("Too high\n\n");
            }
            guess_count++;
        }

    }



    // printf("%d", gn);


    return 0;
}
