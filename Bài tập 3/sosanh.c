#include <stdio.h>

int main(){
	float a,b;
	printf("Nhap so a: ");scanf("%f",&a);
	printf("Nhap so b: ");scanf("%f",&b);	
	if (a>b){
		printf("a>b");
	}
	else if (a==b){
		printf("a=b");
	}
	else{
		printf("a<b");
	}
	return 0;
}
