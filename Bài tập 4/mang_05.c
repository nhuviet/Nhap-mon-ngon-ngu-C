#include <stdio.h>

void main(){
	int c;
	int n;
	printf("Nhap kich thuoc mang: ");scanf("%d",&n);
	
	int a[n];
	
	for(c=0; c<n; c++){
		printf("Nhap phan tu thu %d: ",c+1);scanf("%d",&a[c]);
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
			break;
		}	
	}
	
	if (check > 0){
		printf("Co ton tai");
	}
	else{
		printf("Khong ton tai");
	}
	
}
