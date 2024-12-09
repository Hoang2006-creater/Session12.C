#include <stdio.h>

int kiemTraSoHoanHao(int n) {
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum == n;
}
int main() {
    int so1, so2;

    // Nhap hai so hoan hao ban phim
    printf("Nhap so thu nhat: ");
    scanf("%d", &so1);
    printf("Nhap so thu hai: ");
    scanf("%d", &so2);

    // Kiem tra va in ket qua cho so thu nhat
    if (kiemTraSoHoanHao(so1)) {
        printf("%d la so hoan hao.\n", so1);
    } else {
        printf("%d khong phai la so hoan hao.\n", so1);
    }

    // Kiem tra va in ket qua cho so thu hai
    if (kiemTraSoHoanHao(so2)) {
        printf("%d la so hoan hao.\n", so2);
    } else {
        printf("%d khong phai la so hoan hao.\n", so2);
    }

    return 0;
}

