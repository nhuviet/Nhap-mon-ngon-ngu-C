#include <stdio.h>

void main(){
	int n,c;
	printf("Nhap so luong phan tu: ");scanf("%d",&n);
	int a[n];
	
	
	for (c=0;c<n;c++){
		printf("Nhap phan tu thu %d: ",c+1);scanf("%d",&a[c]);
	}
	
	//in tat ca phan tu cua mang
	printf("\n\nMang a[");
	for (c=0;c<n;c++){
		printf("%d ",a[c]);
	}
	printf("]\n\n");
	
	//tinh tong mang
	int sum=0;
	for (c=0;c<n;c++){
		sum+=a[c];
	}
	printf("Tong cac phan tu cua mang: sum=%d",sum);

}
