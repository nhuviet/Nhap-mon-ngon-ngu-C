int test03(){
	int n,i,sum=0;

    printf("Nhap so n(2 chu so): "); scanf("%d",&n);
    
	i = n%10; 
	sum+= i;
	n/= 10;
	
	i = n%10;
	sum+= i;
	n/= 10;
		
	printf("%d\n",sum);
}
