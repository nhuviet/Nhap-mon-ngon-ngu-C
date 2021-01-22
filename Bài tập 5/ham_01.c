#include <stdio.h>
int Sum(int a,int b,int c);

int Sum(int a, int b, int c){
	return a+b+c;
}

int main(){
	int a,b,c;
	
	printf("Nhap so a: ");scanf("%d",&a);
	printf("Nhap so b: ");scanf("%d",&b);
	printf("Nhap so c: ");scanf("%d",&c);
	
	printf("%d",Sum(a,b,c));
	return 0;
}


//khong gia tri tra ve 

#include <stdio.h>
void Sum(int a,int b,int c);

void Sum(int a, int b, int c){
	printf("%d",a+b+c);
	
}

int main(){
	int a,b,c;
	
	printf("Nhap so a: ");scanf("%d",&a);
	printf("Nhap so b: ");scanf("%d",&b);
	printf("Nhap so c: ");scanf("%d",&c);

	Sum(a,b,c);
	return 0;
}
