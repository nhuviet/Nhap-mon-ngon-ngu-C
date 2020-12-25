#include <stdio.h>

int main(){
	int i,row,n;
	
	printf("Nhap n=");scanf("%d",&n);//nhap n
	
	for (row=1 ;row<=n; row++){//vong lap in hang
		
		for (i=1; i<=row; i++){//vong lap in so
			printf("%d ",i);
		}
		printf("\n");
	}
	return 0;
}
