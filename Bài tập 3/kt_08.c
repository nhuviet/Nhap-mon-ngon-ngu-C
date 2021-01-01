#include <stdio.h>

int main(){
	int a,b;
	
	printf("Chuong trinh kiem tra 2 so cung dau\n");
	
	printf("Nhap so a: ");scanf("%d",&a);
	printf("Nhap so b: ");scanf("%d",&b);

	if( (a+b)>a && (a+b)>b || (a+b)<a & (a+b)<b ){
		printf("Day la 2 so cung dau voi nhau");
	}
	else if (a==0 || b==0){
		printf("So 0 la so trung lap khong the xac dinh");
	}
	else{
		printf("Day la 2 so trai dau");
	}
	
	return 0;
}
