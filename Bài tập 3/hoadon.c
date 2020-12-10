#include <stdio.h>

int main(){
	//Khai bao bien 
	float dongia,thanhtien;
	int soluong;
	//Nhap gia cua mon hang va so luong
	printf("Nhap so luong muon mua: ");
	scanf("%d",&soluong);
	printf("Nhap gia mon hang: ");
	scanf("%f",&dongia);
	
	if (soluong>=5){//kiem tra so luong mua >=5
		//giam gia 25% = 75% gia tri don hang
		thanhtien=(dongia*soluong)*75/100;
		printf("Thanh tien: %g",thanhtien);
	}
	else{//so luong mua duoi 5
		thanhtien=dongia*soluong;
		printf("Thanh tien: %g",thanhtien);
	}
	return 0;
}
