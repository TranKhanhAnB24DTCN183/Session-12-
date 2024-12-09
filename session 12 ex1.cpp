#include <stdio.h>

int calculateSum(int a, int b) {
    return a + b;
}
int main() {
    int num1, num2, sum;
    printf("nhap so thu nhat: ");
    scanf("%d", &num1);
    printf("nhap so thu hai: ");
    scanf("%d", &num2);
    sum = calculateSum(num1, num2);
    printf("tong cua hai so la: %d\n", sum);
    return 0;
}

