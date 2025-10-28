#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Do you have cat or a dog? yes or no \n");
    char answer[10];
    scanf("%s", answer);

    if (strcmp(answer, "yes") == 0) {
        printf("That's great! Do you have a cat? yes or no \n");
        char answer2[10];
        scanf("%s", answer2);

        if (strcmp(answer2, "yes") == 0) {
            printf("meow meow \n");
        }
        else {
            printf("woof woof \n");
        }
    } 
    else { 
        printf("Oh, that's too bad! \n");
    }

    return 0;
}
