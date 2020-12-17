#include <stdio.h>

int main(){
	//Khai bao bien 
	float dongia,thanhtien;
	int soluong;
	//Nhap gia cua mon hang va so luong
	printf("Nhap so luong muon mua (VND): ");
	scanf("%d",&soluong);
	printf("Nhap gia mon hang: ");
	scanf("%f",&dongia);
	
	if (soluong>=5 && dongia>=500 ){//kiem tra so luong mua >=5,gia tri moi mon hang >500
		//giam gia 50% 
		thanhtien=(dongia*soluong)*0.5;
		printf("Thanh tien: %g",thanhtien);
	}
	else{//so luong mua duoi 5
		thanhtien=dongia*soluong;
		printf("Thanh tien: %g",thanhtien);
	}
	return 0;
}
