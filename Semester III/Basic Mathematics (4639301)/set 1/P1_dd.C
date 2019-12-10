#include<stdio.h>
#include<conio.h>

main()
{
	int u[20],len,i,alen,a[20],count=0,c[40],d[20],j,count1=0,count2=0,f[20],p=0,q=0;
	
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
	printf("}");
	

	printf("\nCompliment of set A\n");
	while(p<=len && q<=alen)
	{
			if(u[p]<a[q])
			{
				printf("%d\t",u[p]);
//				f[count2++]=u[p];
				p++;	
			}
			else if(a[q]<u[p])	
			{
				printf("%d\t",a[q]);
//				f[count2++]=a[q];
				q++;
			}
			else
			{
				p++;
				q++;
			}
	}
	
//	printf("{");
//	for(i=1;i<=count2;i++)
//	{
//		printf("%d\t",f[i]);
//	}
//	printf("}");	
	
	printf("\nUnion is\n");
	for(i=1;i<=len;i++)
	{
			c[i]=u[i];
			count++;
	}
	for(i=1;i<=alen;i++)
	{
		c[count]=a[i];
		count++;
	}
	
	printf("{");
	for(i=1;i<count;i++)
	{
		printf("%d\t",c[i]);
	}
	printf("}");

		
	printf("\nIntersect of set A\n");
	for(i=1;i<=len;i++)
	{
		for(j=1;j<=alen;j++)
		{
			if(u[i]==a[j])
			{
				d[i]=a[j];
				count1++;	
			}
		}
	}
	
	printf("{");
	for(i=1;i<=count1;i++)
	{
		printf("%d\t",d[i]);
	}
	printf("}");
	
	getch();
}
