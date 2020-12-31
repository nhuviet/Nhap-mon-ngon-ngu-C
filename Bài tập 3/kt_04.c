#include<stdio.h>

int main(){
    int n,i,sum=0;

    printf("Nhap so n: "); scanf("%d",&n);
   
    for(;n!=0;n=n/10){
        i = n % 10; // i = phan du chia 10
        sum += i;
    }    
    printf("%d",sum);
}
