#include<stdio.h>
#include<conio.h>

main()
{
	int n,i,j,count;
	
	printf("Enter the Value of N : ");
	scanf("%d",&n);
	
	printf("Prime Numbers Are : \n");
	for(i=1;i<=n;i++)
	{
		count=0;
		for(j=1;j<=n;j++)
		{	
			if(i%j==0)
			{
					count++;	
			}		
		}
		if(count==2)
		{
			printf("%d\t",i);			
		}
				
	}	
	getch();
}
