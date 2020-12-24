#include <stdio.h>

int main(){
	int c, n, sum = 0;
  
	printf("Nhap so n:");
  	scanf("%d",&n);
  
	printf("n = %d\n",n);
  
	for (c=1; c <= n; c++){
		sum += c;
	}
  
	// In Ket qua
	switch (n){
		case 1:
			printf("S = %d ",sum);
			break;
		case 2:
			printf("S = 1 + %d = %d ",n,sum);
			break;
		case 3:
			printf("S = 1 + 2 + %d = %d ",n,sum);
			break;
		case 4:
			printf("S = 1 + 2 + 3 + %d = %d ",n,sum);
			break;
		default:
			printf("S = 1 + 2 +...+ %d = %d ",n,sum);
	}
	
	return 0;
}
