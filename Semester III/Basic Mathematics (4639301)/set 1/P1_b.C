#include<stdio.h>
#include<conio.h>

main()
{
	int a[20],len,i,ele,find=0;
	
	printf("Enter The Set Length : ");
	scanf("%d",&len);
	
	for(i=1;i<=len;i++)
	{
		printf("a[%d] :",i);
		scanf("%d",&a[i]);
	}
	
	printf("Your set Values Are : \n");	
	printf("{ ");
	for(i=1;i<=len;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("}");
	
	
	printf("\nEnter the Value : ");
	scanf("%d",&ele);
	
	for(i=1;i<=len;i++)
	{
		if(a[i]==ele)
		{
			printf("Element are in the set\n");	
			find=1;
		}	
	}
	
	if(find==0)
	{
		printf("Elements are not in the Set\n");
	}
	
	getch();
}
