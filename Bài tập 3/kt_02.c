#include <stdio.h>
#include <math.h>

int main(){
	int a,b,c;
	float delta;
	float x1,x2,x;
	
  //Nhap du lieu phuong trinh
	printf("Chuong trinh tinh nghiem phuong trinh bac 2\n");
	printf("Phuong trinh có dang ax^2 + bx + c = 0\n");
	printf("Nhap hang so phuong trinh\n");
	printf("a = ");scanf("%d",&a);
	printf("b = ");scanf("%d",&b);
	printf("c = ");scanf("%d",&c);
	
	//tinh delta
	delta=pow(b,2)-4*a*c;
	
  //tinh nghiem
	if (delta >0){
		x1=(-b + sqrt(delta))/(2*a);
		x2=(-b - sqrt(delta))/(2*a);
		printf("Phuong trinh %dx^2 + %dx + %d = 0 co 2 nghiem\n",a,b,c);
		printf("x1 = %.2f\n",x1);
		printf("x2 = %.2f\n",x2);
	}
	else if (delta == 0){
		x= -b/(2*a);
		printf("Phuong trinh %dx^2 + %dx + %d = 0 có nghiem kep\n",a,b,c);
		printf("x = %.f\n",x);
	}
	else{
		printf("Phuong trinh %dx^2 + %dx + %d = 0 vo nghiem\n",a,b,c);
	}
}
