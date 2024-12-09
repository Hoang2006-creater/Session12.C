#include <stdio.h>

//Ham kiem tra so nguyen to
int kiemTraSoNguyenTo(int n){
	if(n<2) return 0;
	for (int i=2; i * i<n;i++){
		if (n%i==0) return 0;
	}
	return 1;
}
int main() {
    int so1, so2;

    // Nhap hai so nguyen tu ban phim
    printf("Nhap so thu nhat: ");
    scanf("%d", &so1);
    printf("Nhap so thu hai: ");
    scanf("%d", &so2);

    // Kiem tra va in ket qua cho so thu nhat
    if (kiemTraSoNguyenTo(so1)) {
        printf("%d la so nguyen to.\n", so1);
    } else {
        printf("%d khong phai la so nguyen to.\n", so1);
    }

    // Kiem tra va in ket qua cho so thu hai
    if (kiemTraSoNguyenTo(so2)) {
        printf("%d la so nguyen to.\n", so2);
    } else {
        printf("%d khong phai la so nguyen to.\n", so2);
    }

    return 0;
}

