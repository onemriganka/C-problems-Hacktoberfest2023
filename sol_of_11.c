#include <stdio.h>

int main() {
    // Using a while loop
    char ch = 'z';
    printf("Using while loop: ");
    while (ch >= 'a') {
        printf("%c ", ch);
        ch--;
    }
    printf("\n");

    // Using a do-while loop
    ch = 'z';
    printf("Using do-while loop: ");
    do {
        printf("%c ", ch);
        ch--;
    } while (ch >= 'a');
    printf("\n");

    // Using a for loop
    printf("Using for loop: ");
    for (ch = 'z'; ch >= 'a'; ch--) {
        printf("%c ", ch);
    }
    printf("\n");

    return 0;
}
