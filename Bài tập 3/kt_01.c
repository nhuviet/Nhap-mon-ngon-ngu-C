#include <stdio.h>

int main(){
	int a,b;
  
	printf("Bang cuu chuong\n");
  
	for (a=1;a<=9;a++){
		printf("Bang cuu chuong %d\n",a);
		for (b=1;b<=9;b++){
			printf("%d * %d = %d\n",a,b,a*b);
		}
	}
}
