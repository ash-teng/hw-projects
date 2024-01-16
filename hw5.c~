#include <stdio.h>
#include <stdlib.h>

void printLetter(char c);
void printHex(char c);
void printDecimal(char c);
int printBinary(char c);
void printParity(int bits);
void analyzeChar(char c);


int main()
{
    char c;
    printf("Enter a line of text: ");
    do {
        scanf("%c", &c);
        analyzeChar(c);
    } while (c != '\n');
    return 0;
}

void printLetter(char c)
{
    if (c == '\n')
        printf("The ASCII code for '\\n'");
    else
        printf("The ASCII code for '%c' ", c);
}

void printHex(char c)
{
    printf("is %02x hex, ", c);
}

void printDecimal(char c)
{
    printf("%3d decimal, ", c);
}

int printBinary(char c)
{
    int i = 0;
    int bitMask = 0x80 ;
    int count = 0;
    while (i < 8) {
        if ((c & bitMask) != 0) {
            printf("1");
            count++;
        } else
            printf("0");
        i++;
        bitMask >>= 1; 
    }            
    printf(" binary, ");
    return count;
    
}

void printParity(int bits)
{
    printf("%d bits are set, ", bits);
    if (bits % 2 == 0)
        printf("parity is even");
    else
        printf("parity is odd");
    
    
}

void analyzeChar(char c)
{
    int bits = 0;
    printLetter(c);
    printHex(c);
    printDecimal(c);
    bits = printBinary(c);
    printParity(bits);
    printf("\n");
}
