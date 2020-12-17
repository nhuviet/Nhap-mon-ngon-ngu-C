#include <stdio.h>

int main(){
int m;
printf("Nhap thang: ");scanf("%d",&m);
if (m<=12){
	if (m == 2){
		printf("28 ngay");
	}
	else if (m % 2 ==0 && m<8) {
		printf("30 ngay");
	}
	else if (m % 2 !=0 && m<8) {
		printf("31 ngay");
	}
	else if (m % 2 ==0 && m>=8) {
		printf("31 ngay");
	}
	else{
		printf("30 ngay");
	}
}
else{
	printf("Khong co thang %d",m);
}
	return 0;
}
