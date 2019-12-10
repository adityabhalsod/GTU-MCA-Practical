#include<stdio.h>
#include<conio.h>
main()
{
		int no,i,count=0;
		
		printf("Enter the Value of No : ");
		scanf("%d",&no);
		
		for(i=1;i<=no;i++)
		{
			if(no%i==0)
			{
				count++;
			}	
		}
		
		if(count==2)
		{
			//printf("%d\t",count);
			printf("%d number is Prime Number",no);
		}
		if(count>=3)
		{
			printf("%d number is Composite Number",no);
		}
		
}
