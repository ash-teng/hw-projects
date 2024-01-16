#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* fp = fopen("data.txt", "w");
    fprint(fp, "Hello file!\n");
    fscanf(fp, "%s", string_bugfer);
    printf("I just read: \"%s\"n",string_buffer);
    fclose(fp);
    fp = fopen("data.txt", "r");
    fgets(string_buffer, BUFSZ, fp);
    printf("This time I read: \"%s\"n", string_buffer);
    fclose(fp);
    return EXIT_SUCCESS;
}
