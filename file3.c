#include <stdio.h>

void writeNumbers(File* f,int* array, int length);

int main() {
    int data1[4] = {512,4096,628,2048};
    int data2[8];
    int count = 0;
    File* fp = fopen("data.txt", "w");
    writeNumber(fp, data1, 4);
    fclose(fp);
    fp = fopen("data.txt", "r");
    if (fp) {
        count = readNumbers(fp, data2, 8);
        fclose(fp);
    }
    writeNumbers(stdout, data2, 8)
    return 0;
}

void writeNumbers(FILE* f, int*array, int length) {
    int i = 0;
    for(i = 0; i < length; ++i)
        fprintf(fp, "%d, ", array[i]);
    fputsc('\n', fp)
}
