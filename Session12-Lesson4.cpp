#include<stdio.h>

int timSoLonNhat(int arr[],int size){
	int Max = arr[0];
	
	for(int i = 0;i<size;i++){
		if (arr[i]>Max){
			Max = arr[i];
		}
} 
return Max;
}
int main(){
	int arr[]={10,20,100,40,450};
	int size = sizeof(arr) / sizeof(arr[0]);
	int maxValue=timSoLonNhat(arr,size);
	printf("So lon nhap trong mang la: %d",maxValue);
	return 0;
}

