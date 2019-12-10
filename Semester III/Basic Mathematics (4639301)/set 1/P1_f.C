#include<stdio.h>
#include<conio.h>

main()
{
	int u[20],len,i,alen,a[20],j,flag=0,count=0;
	
	printf("Enter The Set Length of Set U : ");
	scanf("%d",&len);
	
	for(i=1;i<=len;i++)
	{
		printf("a[%d] :",i);
		scanf("%d",&u[i]);
	}
	
	printf("Your set Values Are : \n");	
	printf("{ ");
	for(i=1;i<=len;i++)
	{
		printf("%d\t",u[i]);
	}
	printf("}");


	
	printf("\nEnter The Set Length of Set A : ");
	scanf("%d",&alen);
	
	for(i=1;i<=alen;i++)
	{
		printf("a[%d] :",i);
		scanf("%d",&a[i]);
	}
	
	printf("Your set Values Are : \n");	
	printf("{ ");
	for(i=1;i<=alen;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("}\n");
	
	for(i=1;i<=len;i++)
	{
		for(j=1;j<=alen;j++)
		{	
			if(u[i]==a[j])
			{
				flag=0;
				count++;
			}
		}
	}
	
	if(flag==0)
	{
		printf("\nTwo sets Are Equals\n");
	}
	else
	{
		printf("\nSets are not Equal\n");
	}
}
