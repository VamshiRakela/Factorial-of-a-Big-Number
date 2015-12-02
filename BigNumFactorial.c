// Title:Nth prime
//Author:VamshiRakela
// Dt:05/11/2015

int main()
{
	int arr[500],i,j,fact,carry,arr_size,num;
	printf("Enter the number\n");
	scanf("%d",&fact);
	arr[0]=1;
	carry=0;
	arr_size=1;
	for(i=1;i<=fact;i++)
	{
		for(j=0;j<arr_size;j++)
		{
			num=arr[j]*i+carry;
			arr[j]=num%10;
			carry=num/10;
		}
		while(carry!=0)
		{
			arr[arr_size]=carry%10;
			carry=carry/10;
			arr_size++;
		}
	}
	printf("Factorial of %d is:",fact);
	for(i=arr_size-1;i>=0;i--)
		printf("%d",arr[i]);
	getch();
	return(0);
}
	
