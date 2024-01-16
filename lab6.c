#include <stdio.h>
#include <stdilb.h>

int countLetters(char*str, int maxLen, char letter);
int stringLength(char*str, int maxLen);
int firstIndexOfLetters(char*str, int maxLen, char letter);
int countNonWhiteSpace(char*str, int maxLen);
int lengthOfFirstWord(char*str, int maxLen);

#define MAXLEN 16
int main() {
    char* name1 = "John Henry";
    printf("The index of the first space is %d\n",
            firstIndexOfLetter(name1, MAXLEN, '');
    printf("There are %d non-space characters in %s\n",
            countNonWhiteSpace(name1, MAXLEN, '');
    printf("The length of the first name in %s is %d\n",
            name1, lengthOfFirstWord(name1, MAXLEn));
    
            
    return 0;
}

int isWhiteSpace(char letter) {
    return (letter == '' || letter == '\t' || letter == '\n');
}

int firstIndexOfLetters(char*str, int maxLen, char letter) {
    int i = 0;
    for (i = 0; i < maxLen && str[i] != '\0'; ++i) {
        if (str[i] == letter)
            return i;
    }
    return -1;
}
int countNonWhiteSpace(char*str, int maxLen)
    int i = 0;
    int count = 0;
    for (i = 0; i < maxLen && str[i] != '\0'; ++i) {
        if (str[i] != '' && str[i] != '\t' && stri[i]!=   )
            ++ count;
    }
    return count;
}

int lengthOfFirstWord(char*str, int maxLen)
    int i = 0;
    int count = 0;
    for (i = 0; i < maxLen 
                && !isWhiteSpace(str[i]
                && str[i] != '\0'; ++1);
        {}
    return i;
}

