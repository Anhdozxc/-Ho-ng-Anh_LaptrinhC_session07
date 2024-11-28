#include <stdio.h>

 int main() {
    int arr[] = {1, 3, 6, 7, 10};
    int length = sizeof(arr) / sizeof(arr[0]); 
    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < length; i++) {
        printf("Phan tu thu %d: %d\n", i + 1, arr[i]);
    }

    printf("Do dai cua mang la: %d\n", length);

    return 0;
}


