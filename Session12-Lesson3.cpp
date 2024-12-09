#include<stdio.h>

//Ham tinh giai thua
unsigned long long tinhGiaiThua(int n) {
    if(n<0){
    	printf("Giai thua khong xac dinh cho so am\n");
    	return 0;
	}
	unsigned long long giaiThua = 1;
	for(int i =1;i<=n; i++){
		giaiThua *= i;
	}
	return giaiThua;
}
int main() {
    int so;
    printf("Nhap so nguyen: ");
    scanf("%d", &so);

    unsigned long long ketQua = tinhGiaiThua(so);
    if (ketQua != -1) {
        printf("Giai thua cua %d la: %llu\n", so, ketQua);
    }

    return 0;
}
	
