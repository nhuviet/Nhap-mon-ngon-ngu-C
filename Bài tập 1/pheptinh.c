#include <stdio.h>

int main()
	{
	int a,b,tong,hieu,tich;
	float thuong;
	a=3;
	b=5;
	tong = a+b;
	hieu = a-b;
	tich = a*b;
	thuong = (double)a/b;
	printf ("a+b= %d \na-b %d \na*b= %d \na/b= %0.1f  ",tong,hieu,tich,thuong);
	return 0;
	}
