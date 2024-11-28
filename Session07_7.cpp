#include <stdio.h>

 int main() {
    int n;
    printf("Moi ban nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Moi ban nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
        
        while (arr[i] % 2 == 0) {
            printf("Phan tu ban nhap phai la so le. Ban hay nhap lai phan tu thu %d: ", i + 1);
            scanf("%d", &arr[i]);
        }
    }
    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}


