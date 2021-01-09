#include <stdio.h>

int main(){

	int high,i,space;
	int f_leaf,leaf;
	int h_goc,s_goc;
	
	printf("Nhap chieu cao cua cay (so nguyen lon hon 1):");scanf("%d",&high);
	
	//phan than tren
	
	for(f_leaf=2; f_leaf<=(high+1); f_leaf++){//tan la
		
		for (i=1; i<=f_leaf; i++){//ve tan la
 			for (space=1; space<=(high-(i-1)); space++){
				printf("  ");
			}
			for (leaf=1; leaf<=i*2-1; leaf++){
 				printf("**");
 			}
			printf("\n");
  		}
	}
	
	// phan than duoi
	for (h_goc=1;h_goc<=high;h_goc++){
		for (s_goc=1;s_goc<=(2*high);s_goc++){
			printf(" ");
		}
		printf("**");
		printf("\n");
	}
	return 0;
}


