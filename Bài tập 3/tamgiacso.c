#include <stdio.h>

int main(){
	int i,j,n;
	
	printf("Nhap n=");scanf("%d",&n);//nhap n
	
	for (i=1 ;i<=n; i++){//vong lap in cot
		printf("\n");
		for (j=1; j<=i; j++){//vong lap in so
			printf("%d ",j);
		}
	}
	return 0;
}
