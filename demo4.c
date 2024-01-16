#include <stdio.h>

int main(){
    int start = 0;
    int stop = 0;
    int count = 0;
    int not_done =0; 
    printf("Enter the starting value for a loop:");
    scanf("%d", &start);
    printf("Enter the stopping value for a loop:");
    scanf("%d", &stop);
    /* loop from start to stop*/
    /* while loop*/
    count = start;
    while (count<=stop){
     printf("%d", count);
     count++ ;
    }
    printf("\n")
    /* do while loop*/
    count = start;
    do {
     printf("%d",count);
     if (start < stop);
      count++;
      else if (start > stop)
      count --;
      else
      /* se not_done to false*/
      not_done = 0;
   }while (not_done);
    return 0;
}


