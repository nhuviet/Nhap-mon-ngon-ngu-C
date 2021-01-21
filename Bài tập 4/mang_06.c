#include <stdio.h>

void main(){
	int c;
	int n;
	printf("Nhap kich thuoc mang: ");scanf("%d",&n);
	
	int a[n];
	
	for(c=0; c<n; c++){
		printf("a[%d]: ",c);scanf("%d",&a[c]);
	}
	
	//Hien thi cac phan tu cua mang a
	printf("Mang a[");
	for (c=0; c<n; c++){
		printf(" %d ",a[c]);
	}
	printf("]\n");
	
	//Nhap va kiem tra so m trong mang
	int m;
	int check=0;
	printf("Nhap so can kiem tra: ");scanf("%d",&m);
	for (c=0; c<n; c++){
		if (a[c]==m){
			check+=1;
			
		}	
	}
	
	if (check > 0){
		printf("So phan tu co gia tri la %d: %d\n",m,check);
		printf("Chi so ca cac phan tu tren la: ");
		for (c=0; c<n; c++){
			if (a[c]==m){
				printf(" %d",c+1);
			}
		}
	}
	else{
		printf("Khong ton tai");
	}
	
}
