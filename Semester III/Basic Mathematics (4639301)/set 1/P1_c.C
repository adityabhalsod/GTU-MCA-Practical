#include<stdio.h>
#include<conio.h>

main()
{
	int a[20],len,i,noele=0;
	
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
		noele++;
	}
	printf("}");
	
	printf("\nNumber of Element in the Set is : %d\n",noele);
	getch();
}
