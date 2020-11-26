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
	thuong = (float)a/b;
	printf ("a\tb\ta+b\ta-b\ta*b\ta/b\n%d\t%d\t%d\t%d\t%d\t%0.1f",a,b,tong,hieu,tich,thuong);
	return 0;
	}
