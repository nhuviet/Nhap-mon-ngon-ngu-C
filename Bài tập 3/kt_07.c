#include <stdio.h>

int main(){
	int a,b,c;
	
	printf("Chuong trinh kiem tra 3 canh cua hinh tam giac\n");
	
	printf("Nhap canh a: ");scanf("%d",&a);
	printf("Nhap canh b: ");scanf("%d",&b);
	printf("Nhap canh c: ");scanf("%d",&c);
	
	if ((a+b)>c && (a+c)>b && (b+c)>a){
		printf("Day la 3 canh cua hinh tam giac\n");
	}
	else{
		printf("Day khong phai 3 canh cua hinh tam giac\n");
	}
	return 0;
}
