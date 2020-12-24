#include <stdio.h>

int main(){
	int x,s=0;// khai bao bien x va s
	
	for (x=1;x<=10;x++){//vong lap x 1->10
		s+=x;//moi vong lap cong them gia tri x vao s
	}
	printf("tong S = %d",s);
	return 0;
}
