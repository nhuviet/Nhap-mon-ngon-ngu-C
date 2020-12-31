#include <stdio.h>

int main(){
	int n, i, c, space;

	printf("\nNhap n: ");scanf("%d", &n);

	for (i=0; i<n; i++){
 		for (space=n-1; space>i; space--){
			printf("   ");
		}
		for (c=0; c<i*2+1; c++){
 			printf(" * ");
 		}
	printf("\n");
  	}
  return 0;
}
