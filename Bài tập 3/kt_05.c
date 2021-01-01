#include <stdio.h>

int main(){
    int n, i, sum_c=0, sum_l=0;
    
    printf("Chuong trinh tinh tong chan va le tu 1 den n\n");
    printf("Nhap n: ");scanf("%d",&n);
	
    for (i=1;i<=n;i++){
    	if (i%2==0){ //so chan
    		sum_c+=i;
		}
		else{ //so le
			sum_l+=i;
		}
	}
    printf("Tong cac so chan = %d\n",sum_c);
    printf("Tong cac so le = %d",sum_l);
    return 0;
}
