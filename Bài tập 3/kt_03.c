#include <stdio.h>

int main(){
	int i;
	
	printf("Cac so le tu 1 den 20:\n ");
	for (i=1;i<=20;i++){
		if (i%2 != 0){
			switch (i){
				case 5: //i=5 bo qua
					break;
				case 11: //i=11 bo qua
					break;
				case 15: //i=15 bo qua
					break;
				default: 
					printf("%d\t",i);
			}
		}
	}
