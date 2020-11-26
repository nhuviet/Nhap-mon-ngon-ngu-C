#include <stdio.h>

int main(){
	//Khai bao bien R,PI,CV,DT kieu double
	double R ,PI ,CV ,DT;
	//gan gia tri bien
	R = 2.5;
	PI = 3.14;
	CV = 2 * R * PI;
	DT = R * R * PI;
	//in ra man hinh
	printf("Chu vi \t Dien tich \n %0.1f \t %0.1f",CV,DT);
	return 0;
	
}
