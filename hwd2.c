#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 5

typedef struct{
    int rear;
    int front;
    int array[MAXSIZE];
} Queue;



void insert(Queue *theQueue, int value)
{

    theQueue->rear++;
    theQueue->array[theQueue->rear] = value;
    if (theQueue->front == -1)
       theQueue->front = theQueue->rear;       
}

int removefromQueue(Queue* theQueue)
{
    int j;
    if (theQueue->front == -1)
    {
      printf("Cannot remove, the queue is empty\n");
      return 0;
    }
    else
    {
     if (theQueue->front == theQueue->rear)
      {
       j = theQueue->array[theQueue->front];
       theQueue->front = -1;
       theQueue->rear = -1;
      }
      else
      {
       j = theQueue->array[theQueue->front];
      theQueue->front ++;
      }
    return j;   
   }
}

int main() 
{
    Queue my;
    my.rear = -1;
    my.front = -1;
    char userInput;
    int k;
    while (userInput != 'q')
  {
    printf("What do you want to do? [i for insert, r for remove, q for quit]\n");
    scanf(" %c", &userInput);
    if (userInput == 'i')
    {
      if (my.rear >= MAXSIZE - 1)
        {
          printf("Can't insert, the array is full\n");
        }
      else
        {
          printf("Enter an integer to be inserted into the queue: \n");
          scanf("%d", &k);
          insert(&my, k);
        }
    }
    if (userInput == 'r')
    {
        printf("%d removed from queue\n", removefromQueue(&my));
    }
  }
    return 0;
}

