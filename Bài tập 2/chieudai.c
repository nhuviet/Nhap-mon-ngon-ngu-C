#include <stdio.h>

int main(){
  //khai bao bien l
	int l;
	//Nhap gia tri tu ban phim
	printf("Nhap chieu dai(m): ");scanf("%d",&l);
	//in gia tri ra ma hinh
	printf("Met(m)\tXentimet(cm)\tMilimet(mm)\n%d\t%d\t\t%d",l,l*100,l*1000);
	return 0;
}
