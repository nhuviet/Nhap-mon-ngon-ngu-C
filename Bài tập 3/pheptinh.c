#include <stdio.h>

int main(){
//Khai bao bien a,b,pt
	int a=5,b=2;
	char pt;
  
	printf("Vui long nhap phep tinh: ");
	scanf("%c",&pt);
  
	switch (pt){
		case '+': //Nhap +
			printf("a + b = %d", a+b);
			break;
		case '-': //Nhap -
			printf("a - b = %d", a-b);
			break;
		default: // truong hop con lai
			printf("Vui long nhap phep tinh: ");
	}
	return 0;
}
