#include <stdio.h>

int main(){
	float V,T,DTB;
  //Nhap diem tu ban phim
	printf("Nhap diem van: ");scanf("%f",&V);
	printf("Nhap diem toan: ");scanf("%f",&T);
  //Tinh diem trung binh
  DTB = (V+T)/2;
	printf("Diem van\tDiem toan\tDiem Trung Binh\n");
	printf("%g\t\t%g\t\t%g",V,T,DTB);
}
