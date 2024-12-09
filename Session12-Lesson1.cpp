#include<stdio.h>

int tinhTong(int a, int b){
	return a+b;
}

int main(){
	int x,y,ketQua;
	printf("Moi ban nhap so thu 1: ");
	scanf("%d",&x);
	printf("Moi ban nhap so thu 2: ");
	scanf("%d",&y);
	ketQua= tinhTong(x,y);
	printf("Tong cua 2 so ban nhap la %d",ketQua);
		return 0;
}


