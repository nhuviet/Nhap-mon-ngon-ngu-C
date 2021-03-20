#include <stdio.h>
#include <math.h>
float chu_vi(float r);
float dien_tich(float r);
float const pi=3.14;

int main(){
	float r;
	printf("Tinh chu vi, dien tich hinh tron\n");
	printf("Nhap ban kinh hinh tron r = ");scanf("%f",&r);
	printf("Chu vi hinh tron ban kinh %.2f C = %.2f\n",r,chu_vi(r));
	printf("Dien tich hinh tron ban kinh %.2f S = %.2f",r,dien_tich(r));
	return 0;
}

float chu_vi(float r){
	float result;
	result=2*pi*r;
	return result;
}

float dien_tich(float r){
	float result;
	result=pi*pow(r,2);
	return result;
}
