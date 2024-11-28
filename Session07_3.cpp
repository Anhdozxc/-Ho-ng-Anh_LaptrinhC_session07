#include <stdio.h>

 int main() {
    int arr[5] = {1, 3, 4, 7, 8}; 
    int printed = 0; 
    printf("Cac phan tu la so chan trong mang:\n");
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) { 
            printf("%d ", arr[i]);
            printed = 1; 
        }
    }
    if (!printed) {
        printf("Mang khong chua so chan.");
    }
    printf("\n");
    return 0;
}


