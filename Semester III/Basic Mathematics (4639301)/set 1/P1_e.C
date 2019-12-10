#include<stdio.h>
#include<conio.h>
main()
{
	int a[]={1,3,5,7,9,11,13,15},x[10],n,i,j,flag=1;
	
	printf("\n\tEnter N for set X...");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter Element..");
		scanf("%d",&x[i]);
	}
	j=0;
	i=0;
	do
	{
		flag=0;
		while(a[j])
		{
			if(x[i]==a[j])
			{
				flag=1;
				j++;
				break;

			}
			else
			{
				flag=0;
				j++;

			}
		}

		i++;
	}while(x[i]&&flag==1);
	if(flag==0)
	{
		printf("\n\tNo..");
	}
	else
	{
		printf("\n\tYes..");
	}

	getch();

}
