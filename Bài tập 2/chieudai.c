#include <stdio.h>

int main(){
  //khai bao bien l
	int l;
	//Nhap gia tri tu ban phim
	printf("Nhap chieu dai(m): ");scanf("%d",&l);
	//in gia tri ra ma hinh
	printf("____________________________________________________\n");
	printf("Met(m)\t|\tXentimet(cm)\t|\tMilimet(mm)|\n----------------------------------------------------\n%d\t|\t%d\t\t|\t%d\t   |",l,l*100,l*1000);
	return 0;
}
