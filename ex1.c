#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {
    printf("Guess the number I'm thinking of which is between 1 and 5 \n");
    int number; 
    scanf("%d", &number);

    if (number == 3) {
        printf("You guessed it right! \n");
    }
    else {
        printf("Wrong guess. Try again! \n");
    }

    return 0;
}