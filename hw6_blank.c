/* TODO: put your file header here */
#include <stdio.h>

/* Function: stringLength
 * Purpose:  count the number of characters in a string up to null
 * Argument: str       - the string array
 * Returns:  the length of the string
 * Precondition:  the source is a valid string with null termination
 * Postcondition: Nothing in str is changed
 */
int stringLength(char* str)
{
    /* TODO: put your code here, and replace the return value */
    return 0;
}

/* Function: stringCopy
 * Purpose:  Copy the string from source to destination (but unsafe)
 * Argument: source          - the string to be copied
 * Argument: destination     - the array into which to copy the string
 * Returns:  nothing
 * Precondition:  the source is a valid string with null termination
 * Postcondition: the destination has the same string as the source
 * Postcondition: the destination string is null terminated
 * Postcondition: Nothing in source is changed
 */
void stringCopy(char* source, char* destination)
{
    /* TODO: put your code here */
}

/* Function: safeStringLength
 * Purpose:  count the number of characters in a string, but only
 *           up to a limited length
 * Argument: str       - the string array
 * Argument: maxLength - the size of the array holding the string
 * Returns:  the length of the string
 * Postcondition: Nothing in str is changed
 */
int safeStringLength(char* str, int maxLength)
{
    /* TODO: put your code here, and replace the return value */
    return 0;
}

/* Function: safeStringCopy
 * Purpose:  Copy the string from source to destination
 * Argument: source          - the string to be copied
 * Argument: destination     - the array into which to copy the string
 * Argument: destinationSize - the size available for destination
 * Precondition:  the source is a valid string with null termination
 * Postcondition: the destination has the same string as the source
 *                up to one less than destinationSize
 * Postcondition: in the destination string the last element is null 
 */
void safeStringCopy(char* source, char* destination, int destinationSize)
{
    /* TODO: put your code here */
}

/* Function: stringCountChar
 * Purpose:  count the number of times letter appears in the string
 * Argument: letter    - a single character with letter to be counted 
 * Argument: str       - the string array
 * Argument: maxLength - the size of the array holding the string
 * Returns:  the number of times letter appears in the string
 * Postcondition: Nothing in str is changed
 */
int stringCountChar(char letter, char* str, int maxLength)
{
    /* TODO: put your code here, and replace the return value */
    return 0;
}

/* Function: stringToUpper
 * Purpose:  change a possibly mixed case string to all upper case
 * Argument: str       - the string array
 * Argument: maxLength - the size of the array holding the string
 * Returns:  nothing
 * Precondition: str points to a string
 * Postcondition: all lower case letters in str are replaced with
 *                upper case letters (of the same letter)
 * Postcondition: except for changing case, there are no other changes
 */
void stringToUpper(char* str, int maxLength)
{
    /* TODO: put your code here */
}


/* Function: replaceChar
 * Purpose:  Replace all instances of old character with new character
 * Argument: old       - the character to be replaced
 * Argument: new       - the new character to replace the old
 * Argument: str       - the string array
 * Argument: maxLength - the size of the array holding the string
 */
void replaceChar(char old, char new, char* str, int maxLength)
{
    int i = 0;
    for (i = 0; i < maxLength && str[i] != '\0'; i++)
        if (str[i] == old)
            str[i] = new;
}

#define BUFFER_SIZE 128
int main(void)
{
    char buffer[BUFFER_SIZE] = "";
    char copy[BUFFER_SIZE] = "";
    char* result = NULL;
    int length = 0;
    int count = 0;
    int i = 0;
    printf("Enter a sentence or other string: ");
    result = fgets(buffer, BUFFER_SIZE, stdin);
    /* make sure there is at least 1 null */
    buffer[BUFFER_SIZE - 1] = '\0';
    /* remove the newline at the end */
    replaceChar('\n', '\0', buffer, BUFFER_SIZE);
    /* print the line that was read */
    printf("%s\n", buffer);
    /* demonstrate that stringLength() works correctly */
    length = stringLength(buffer);
    printf("The length of the string is %d.\n", length);
    length = safeStringLength(buffer, BUFFER_SIZE);
    for (i = 0; i < length; i++)
        printf("-");
    printf("\n");
    /* demonstrate that stringToUpper() works correctly */
    stringToUpper(buffer, BUFFER_SIZE);
    printf("%s\n", buffer);
    /* demonstrate that stringCountChar() works correctly */
    count = stringCountChar(buffer[0], buffer, BUFFER_SIZE);
    printf("The letter %c appears %d times.\n", buffer[0], count);
    /* demonstrate that stringCopy works, including length limit */
    stringCopy(buffer, copy);
    printf("%s\n", copy);
    safeStringCopy(buffer, copy, length - 5);
    printf("%s\n", copy);
    return 0;
}
