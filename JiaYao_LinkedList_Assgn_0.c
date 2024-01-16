/* this work is done by Teng JiaYao*/
/* this assignment is to caculate the sum of the linked list*/ 
#include <stdio.h>  /* for printf */
#include <stdlib.h> /* for malloc, free, NULL */
#include "Link.h"

Link* getNewLink(int value, Link* next);
void printLinkedList(Link* head); /* function for steps 2 and 4 */
int sumOfLinkedList(Link* head);  /* function for step 5 */

int main() {
    Link* head = NULL;
    int array[6] = {7, 1, -4, 16, 0, 3};
    int arrLen = 6;
    /* YOUR CODE FOR STEP 1 GOES HERE */
    head = getNewLink(-2, head);/* add the value -2 to the linked list */
    printf("%d\n", head->value);  /* print the value at head */
    /* add the 6 values from the array to the LinkedList */
    int i = 0;
    for (i = 0; i < arrLen; i++ ) {
        head = getNewLink(array[i], head);
    }
    printLinkedList(head);
    printf("The sum is: %d\n", sumOfLinkedList(head));
    return 0;
}

/* calculate the new link list with the value and next pointer*/
 /* YOUR CODE FOR STEP 2 GOES HERE */
Link* getNewLink(int value, Link* next) {
    Link* newLink = (Link*)malloc(sizeof(Link));
    newLink->value = value; 
    newLink->next = next; 
    return newLink;
}

/*print the link list*/
void printLinkedList(Link* head) {
    Link* cursor = head;
    for (cursor = head; cursor != NULL; cursor = cursor->next)
    printf("%d ", cursor->value);
}

/* YOUR CODE FOR STEP 3 GOES HERE */
/* calculate the sum*/
int sumOfLinkedList(Link* head) {
    int sum = 0;
    Link* cursor = head;
    for (cursor = head; cursor != NULL; cursor = cursor->next)
        sum += cursor->value;
    return sum;
}




