#include <stdio.h>

int main(){
	int a,b;
	for (a=1;a<=3;a++){
		printf("Bang %d\n",a);
		for (b=1;b<=3;b++){
			printf("%d x %d = %d\n",a,b,a*b);
		}
	}
	return 0;
}
