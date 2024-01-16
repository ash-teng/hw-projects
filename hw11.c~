#include <stdio.h>
#include <stdlib.h>

void printXYZ(int x, int y, int z) {
    printf("x is equal to %d:  ", x);  
    printf("y is equal to %d:  ", y);   
    printf("z is equal to %d \n", z);    
}    
    

void enterXYZ(int* ptrX, int* ptrY, int* ptrZ) {
    printf("Enter three value for xyz by comma: \n");
    if (scanf("%d, %d, %d", ptrX, ptrY, ptrZ) == 3) 
        printXYZ(*ptrX, *ptrY, *ptrZ);
    else {
        /* get rid of failing input */
        scanf("%*[^\n]");
        enterXYZ(ptrX, ptrY, ptrZ);
    }
}

void swap(int *val1, int *val2) {
    int temp = *val1;
    *val1 = *val2;
    *val2 = temp;
}
    

void xyzAscending(int* px, int* py, int* pz) {
    if (*px > *py)
        swap(px, py);
    if (*py > *pz)
        swap(py, pz);
    if (*px > *py)
        swap(px, py);

}

    
int main() {
    int x = 0;
    int y = 0;
    int z = 0;
    printXYZ(x, y, z);
    enterXYZ(&x, &y, &z);
    printXYZ(x, y, z);
    xyzAscending(&x, &y, &z);
    printXYZ(x, y, z);
    return 0;
}    

