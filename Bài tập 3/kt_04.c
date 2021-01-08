int main(){
	int n,so_du,sum=0;
	printf("Nhap so n (so nguyen <1000): "); scanf("%d",&n);
    
	for(;n!=0;n=n/10){
		sum += n%10;
	}
	
	printf("sum = %d\n",sum);
	return 0;
}
