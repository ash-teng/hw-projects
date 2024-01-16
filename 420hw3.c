#include <stdio.h>
#include <pthread.h>
#include <errno.h>
#include <string.h>

int thread1 = 0;

void * thread_second();

int main()
{
    int success = 0;
    pthread_t thread2;
    printf("Main: PID is %d\n", getpid());
    success = pthread_create(&thread2, NULL, thread_second ,NULL);
    if (success == 0)
    {
        printf("Main: Successfully created a thread with TID of %lu\n", thread2);
        printf("Main: Enter a non-zero integer so that the other thread can get out of its spin loop:\n");
        scanf("%d", &thread1);
        while (thread1 != 0);
        printf("Main: Second thread has re-zeroed the shared variable,so I'm done.\n");
    }
    else
    {
        printf(" Damn: %s/n", strerror(thread2));
    }

return 0;
}


void * thread_second()
{
    printf("   Second thread: My TID is %lu, still in process #%d;\n",pthread_self(), getpid());
    printf("                  I'm about to spin until main enters a non-zero value into the shared variable.\n");
    while(thread1 == 0);
    printf("   Second thread: Main set the shared variable to %d; I'll set it back to zero and then I'm done.\n", thread1);
    thread1 = 0;
}
