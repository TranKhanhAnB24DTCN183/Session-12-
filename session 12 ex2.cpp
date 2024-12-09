#include <stdio.h>

int calculateArraySum(int arr[], int n) {
    int sum = 0;
    int i;
    for ( i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}
int main() {
    int n;
    int i;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n];
    printf("Nhap cac phan tu cua mang:\n");
    for ( i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int total = calculateArraySum(arr, n);
    printf("Tong cua tat ca cac phan tu trong mang la: %d\n", total);
    return 0;
}

