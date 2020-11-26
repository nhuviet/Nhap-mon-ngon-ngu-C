#include <stdio.h>

int main(){
	//Khai bao bien R,PI,CV,DT kieu double
	double R,CV ,DT;
	//khai bao hang pi
	const float PI=3.14;
	//gan gia tri bien
	R = 2.5;
	CV = 2 * R * PI;
	DT = R * R *PI;
	//in ra man hinh
	printf("Chu vi \t Dien tich \n%0.1f \t %0.2lf",CV,DT);
	return 0;
	
}
