int test03(){
	int n,so_du,sum=0;
	printf("Nhap so n (so nguyen <1000): "); scanf("%d",&n);
    
	so_du = n%10; 
	sum+= so_du;
	n/= 10;
	
	so_du = n%10; 
	sum+= so_du;
	n/= 10;
	
	so_du = n%10; 
	sum+= so_du;
	n/= 10;
		
	printf("%d\n",sum);
	
	return 0;
}
