#include <stdio.h>
#include <stdlib.h>

typedef struct listItem
{
    int someInteger;
    struct listItem *next;
}LIST_ITEM;

LIST_ITEM* getnewlink(int someInteger, LIST_ITEM *head);
LIST_ITEM* printLinkedList();
void deletepoints();


int main() {
int someInteger;
LIST_ITEM *next;
LIST_ITEM *delPtr;
LIST_ITEM* start = NULL;
next = getnewlink(someInteger, next);
printf("Ok, here's your list in numeric order %d:", start->someInteger);
deletepoints();
printf("What do you wan to delete?");
scanf("%d\n", delPtr);

return 0;
}

LIST_ITEM* getnewlink(int someInteger, LIST_ITEM *head) {
    LIST_ITEM *start = NULL, *temp;
    temp = malloc(sizeof(LIST_ITEM));
    printf("Enter your integer: ");
    scanf("%d", &(temp->someInteger));
    temp->next = start;
    start = temp;
    return temp;
}

LIST_ITEM* printLinkedList(LIST_ITEM *start) {
LIST_ITEM *trvPtr = start;
while (trvPtr != NULL)
 {
    printf("%d", trvPtr->someInteger);
    trvPtr = trvPtr->next;
 }
return trvPtr;
}

void deletepoints(int valueToBeDeleted) {
int valueToBeDeleted;
LIST_ITEM* delPtr;
LIST_ITEM* start;
if (start == NULL)
    printf("Can't delete from an empty list");
else if (start->someInteger == valueToBeDeleted)
    start = start->next;
else
 {
    delPtr = start;
    while ((delPtr->next != NULL) &&
            (delPtr->next->someInteger != valueToBeDeleted))
        delPtr = delPtr->next;
    if ((delPtr->next = NULL))
      printf("Can't find %d in the list", valueToBeDeleted);
    else
      delPtr->next = (delPtr->next)->next;
 }
}



