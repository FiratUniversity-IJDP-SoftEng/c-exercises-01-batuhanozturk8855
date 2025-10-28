#include <string.h>
#include <stdio.h>

void sayHello(char name[]) {
    printf("Hello %s! \n", name);
}

int main() {
    char name[50];

    printf("Enter your name: ");
    scanf("%s", name);
    sayHello(name);

    return 0;
}