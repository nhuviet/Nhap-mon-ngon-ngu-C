#include <stdio.h>
int Enter_number();
int result(int n);

void main(){
	int n=Enter_number();
	
	printf("tong tu 1 toi %d = %d",n,result(n));
}

//Ham nhap so n va tra ve so n
int Enter_number(){
	int n;
	printf("Nhap so n: ");scanf("%d",&n);
	return n;
}
//Ham tinh tu 1 toi n
int result(int n){
	int count,sum=0;
	for (count=1;count<=n;count++){
		sum+=count;
	}
	return sum;
}
