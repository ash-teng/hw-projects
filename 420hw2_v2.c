
 
#include <stdio.h>
#include <pthread.h>
#include <sys/types.h>
#include <unistd.h>
#include <errno.h>

void *print(void *arg);

int main() 
{
    pthread_t thread = 0;
    int i = 0;
    printf("main thread here; pid is %d, tid is %lu\n", getpid(), pthread_self());
    i = pthread_create(&thread, NULL, print, NULL);
    if (i == 0) 
	{
        printf("main successfully created a new thread with TID of %lu\n", thread);
    } 
	else 
	{
        printf("An error has occured");
    }
    i = pthread_join(thread,NULL);
    if (i == 0) 
	{
        printf("main: second thread has terminated, main will now exit\n", thread);
    } 
	else 
	{
        printf("An error has occured");
    }
}

void *print(void *arg) 
{
    printf("   second thread here, my tid is %lu but I'm still in process %d\n", pthread_self(), getpid());
    return NULL;
}
