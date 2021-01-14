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




#include <stdio.h>

int main(){

	int high,i,space;
	int f_leaf,leaf;
	int h_goc,s_goc;
	
	printf("Nhap chieu cao cua cay (so nguyen lon hon 1):");scanf("%d",&high);
	
	//phan than tren
	
	for(f_leaf=2; f_leaf<=(high+1); f_leaf++){//so tang cua tan la (vi bat dau tu so 2 nen se ket thuc o high + 1) 
	//high = 2 ,f_leaf: 2 -> 3
	//high = 3 ,f_leaf: 2 -> 4
		
		for (i=1; i<=f_leaf; i++){//ve tan la
			//f_leaf = 2, i: 1 -> 2
			//f_leaf = 3, i: 1 -> 3
 			for (space=1; space<=(high-(i-1)); space++){
 				//high = 2, f_leaf = 2,i = 1, space= high-(i-1) = 2
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

