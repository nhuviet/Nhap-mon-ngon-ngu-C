#include <stdio.h>

int main(){
	int a;
	printf("nhap a: ");scanf("%d",&a);
	if (a<0){
		printf("a la so am");
	}
	else if (a==0){
		printf("a khong am cung khong duong");
	}
	else {
		printf("a la so duong");
	}
	
	return 0;
}
