#include <stdio.h>
int lcm(int a, int b);

int main(){
	int a,b;
	printf("Tim boi chung nho nhat cua 2 so\n");
	printf("Nhap so a: ");scanf("%d",&a);
	printf("Nhap so b: ");scanf("%d",&b);
	printf("Boi chung nho nhat cua %d va %d la %d",a,b,lcm(a,b));
	return 0;
}

int lcm(int a, int b){
	int i,result=0;
	for (i=1;i<9999;i++){
		if (i%a==0 && i%b==0){
			result=i;
			break;
		}
	}
	return result;
}
