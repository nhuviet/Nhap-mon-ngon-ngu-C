#include <stdio.h>

int main(){
  //khai bao bien l
	float l;
	//Nhap gia tri tu ban phim
	printf("Nhap chieu dai(m): ");scanf("%f",&l);
	//in gia tri ra ma hinh
	printf("____________________________________________________\n");
	printf("Met(m)\t|\tXentimet(cm)\t|\tMilimet(mm)|\n----------------------------------------------------\n%.f\t|\t%.f\t\t|\t%.f\t   |",l,l*100,l*1000);
	return 0;
}
