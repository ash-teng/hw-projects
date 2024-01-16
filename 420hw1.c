#include <stdio.h> 
#include <unistd.h>
#include <sys/types.h>
#include <stddef.h>

int main()
{
    pid_t pid;
    int i = 0;
    int parent = getpid();
    for (i = 0; i < 3; i++)
        {
          pid = fork();
          if (pid < 0)
            {
              printf("Fork Failed");
              return 1;
            }
          else if (pid == 0)
            {
              printf("I am child#%d, my pid is %d; my parent's pid is %d\n", i+1, getpid(), parent);
              if (i == 1)
                {
                  execv("mysecondprogram.exe", NULL);
                }
               exit(0);
            }
          else
            {
              printf("Parent, my pid is %d: Spawned child #%d whose pid is %d\n", parent, i+1, pid);
            }
        }
    return 0;
}
              
