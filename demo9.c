#include <stdio.h>
#include <stdlib.h>

int main() {
    char letter;
    printf("The size of letter is %d\n", sizeof(letter));
    printf("The value of letter in decimal is %d\n", letter);
    printf("The value of letter in hex (hexdecimal) is %x\n", letter);
    printf("The value of letter in octal is %o\n", letter);
    printf("The ASCII character  of letter is %c\n", &letter);
    printf("The location of letter is %p\n", &letter);
    return 0;
}
