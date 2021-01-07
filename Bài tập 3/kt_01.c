#include <stdio.h>

int main(){
	int a,b;
	printf("Bang 2\n");
	a=2;
	for (b=1;b<=3;b++){
		printf("%d x %d = %d\n",a,b,a*b);
	}
	
	printf("Bang 3\n");
	a=3;
	for (b=1;b<=3;b++){
		printf("%d x %d = %d\n",a,b,a*b);
	}
	
	printf("Bang 4\n");
	a=4;
	for (b=1;b<=3;b++){
		printf("%d x %d = %d\n",a,b,a*b);
	}
	
	return 0;
}
