#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    int data;
    struct Node *next;
} Node;

Node *front = 0;
Node *rear = 0;

void insert(int x)
{
    Node *newnode = (Node*)malloc(sizeof(Node));
    newnode->data = x;
    newnode->next = 0;
    if (rear == 0)
    {
      front = rear = newnode;
      rear->next = front;
    }
    else
    {
      rear->next = newnode;
      rear = newnode;
      rear->next = front;
    }
}

void removeFromQueue()
{
    struct Node *temp;
    temp = front;
    if (front = 0 && rear = 0)
    {
      printf("Nothing to remove; the queue is empty.");
    }
    else if (front == rear)
    {
      front = rear = 0;
      free(temp);
    }
    else
    {
      front = front->next;
      rear->next = front;
      free(temp);
    }
}

int main()
{
    insert(2);
    insert(-1);
    removeFromQueue();
    return 0;
}




