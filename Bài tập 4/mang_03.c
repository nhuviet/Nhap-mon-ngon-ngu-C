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
	
	//dem phan tu
	int count_odd=0,count_even=0,count_0=0;
	for (c=0; c<n; c++){
		if (a[c]%2 != 0){
			count_odd+=1;
		}
		else if (a[c] == 0){
			count_0+=1;
		}
		else if (a[c]%2 == 0){
			count_even+=1;
		}
	}
	printf("Mang co %d so le, %d so chan, %d so 0\n",count_odd,count_even,count_0);
	
	//in cac phan tu
	printf("\nCac so le: ");
	for(c=0;c<n;c++){
		if (a[c]%2 != 0){
			printf("%d  ",a[c]);
		}
	}
	
	printf("\nCac so chan: ");
	for(c=0;c<n;c++){
		if (a[c]%2 == 0 && a[c]!=0){
			printf("%d  ",a[c]);
		}
	}

}
