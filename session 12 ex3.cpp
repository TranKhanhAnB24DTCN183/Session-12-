#include <stdio.h>

unsigned long long factorial(int n) {
    if (n < 0) {
        printf("Giai thua khong xac dinh cho so am\n");
        return 0; 
    }
    unsigned long long result = 1; 
    for (int i = 1; i <= n; ++i) {
        result *= i; 
    }
    return result; 
}

int main() {
    int number;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &number); 

    unsigned long long result = factorial(number); 
    if (number >= 0) {
        printf("Giai thua cua %d la: %lld\n", number, result); 
    }

    return 0; 
}
