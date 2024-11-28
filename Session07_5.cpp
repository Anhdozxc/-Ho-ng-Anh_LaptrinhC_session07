#include <stdio.h>

 int main() {
    int arr[5] = {1, 7, 89, 34, 56}; 
    int max = arr[0];
    int min = arr[0]; 
    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("Phan tu lon nhat ban nhap trong mang la: %d\n", max);
    printf("Phan tu nho nhat ban nhap trong mang la: %d\n", min);

    return 0;
}



