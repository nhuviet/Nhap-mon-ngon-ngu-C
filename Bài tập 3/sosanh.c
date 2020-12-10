#include <stdio.h>

int main(){
	float a,b;//khai bao bien a,b
	//nhap so a va b tu ban phim
	printf("Nhap so a: ");scanf("%f",&a);
	printf("Nhap so b: ");scanf("%f",&b);	
	//so sanh a va b
	if (a > b){
		printf("a > b");
	}
	else if (a == b){
		printf("a = b");
	}
	else{
		printf("a < b");
	}
	return 0;
}
