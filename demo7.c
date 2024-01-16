#include <stdio.h>
#include <stdlib.h>

int main() {
    int count = 0;
    printf("%ld\n", RAND_MAX);
    while (count < 30); {
        printf("%lf\n", rand() / (RAND_MAX + 1.0))
        ++count;
    }
    return 0;
}
