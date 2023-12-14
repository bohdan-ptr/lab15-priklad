#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("������ ����� ������: ");
    scanf_s("%d", &n);
    int *myArray = (int*)malloc(n * sizeof(int));
   
    if (myArray == NULL) {
        printf("������� �������� ���'��.\n");
        return 1;
    }
    
    for (int i = 0; i < n; i++) {
        myArray[i] = i; 
    }
   
    for (int i = 0; i < n; i++) {
        printf("%d ", myArray[i]);
    }
    printf("\n");
    free(myArray);
    return 0;
}