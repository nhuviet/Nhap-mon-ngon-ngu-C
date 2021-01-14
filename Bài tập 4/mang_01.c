#include <stdio.h>

int main(){
	int a[4]={3,5,7,2};
	int i,sum=0;
	for (i=0;i<4;i++){
		printf("Phan tu thu %d: %d\n",i+1,a[i]);
		sum+=a[i];
	}
	printf("Tong cac phan tu trong mang: %d",sum);
	return 0;	
}
