
#include <stdio.h>

int main(){
	int a,b,n;
  
  //Nhap 2 so a,b
	printf("Nhap a: ");scanf("%d",&a);
	printf("Nhap b: ");scanf("%d",&b);
  
	for (n=a;n<=b;n++){
		switch (n){
			case 1: //n=1
				printf("one\n");
				break;
			case 2: //n=2
				printf("two\n");
				break;
			case 3: //n=3
				printf("three\n");
				break;
			case 4: //n=4
				printf("four\n");
				break;
			case 5: //n=5
				printf("five\n");
				break;
			case 6: //n=6
				printf("six\n");
				break;
			case 7: //n=7
				printf("sevent\n");
				break;
			case 8: //n=8
				printf("eight\n");
				break;
			case 9: //n=9
				printf("nine\n");
				break;
			default: //n>9
				if (n%2==0){ //n la so chan
					printf("even\n");
				}
				else{ //n la so le
					printf("odd\n");
				}
		}
	}

	
	return 0;
}
