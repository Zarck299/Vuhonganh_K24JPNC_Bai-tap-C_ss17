#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sigma();

int main() {
    sigma();
    return 0;
}

void sigma() {
    char *arr; 
    int size = 50; 
    arr = (char *)malloc(size * sizeof(char));
    if (arr == NULL) {
        printf("Khong the cap phat bo nho!\n");
        return;
    }

    printf("Moi ban nhap: ");
    fgets(arr, size, stdin);

    arr[strcspn(arr, "\n")] = '\0';
   
    for (int i = 0; i < strlen(arr); i++) {
        printf("%c: %d\t", arr[i], arr[i]);
    }


    free(arr);
}
