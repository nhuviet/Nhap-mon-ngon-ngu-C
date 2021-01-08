#include <stdio.h>

int main()
{
	int n, i, j; 
	printf("\nNhap chieu cao cua hinh tam giac : ");
	scanf("%d", &n);

	for (i=1; i<=n; i++){ 

 		for (j=1; j<=(2*n-1);j++){
			if (j==(n-(i-1)) || j==(n+(i-1)) || i == n){ //canh bên trai: j==(n-(i-1)), canh ben phai: j==(n+(i-1), i==n la canh day
				printf(" * ");
			}
			else{
				printf("   ");
			}
		}

		printf("\n");
	}
	return 0;
}
