#include<stdio.h>
#include<conio.h>

int n;
void dis(int []);
void delet(int []);
void updat(int []);

void main()
{
	int arr[20],i,ch;
	clrscr();
	printf("\n\tEnter size of an array:::¯--->");
	scanf("%d",&n);

		if(n>20)
		n=20;

	printf("\n\tEnter Element in Array...\n");

	for(i=0;i<n;i++)
	{
		printf("array[%d] :::¯--->",i);
		scanf("%d",&arr[i]);
	}

	printf("\n\tElements are :::¯--->");
	dis(arr);
	do
	{
		m:
		printf("\n\t1-Delete\n\t2-Update\n\t3-Exit");
		printf("\n\tEnter Your Choice:::¯--->");
		scanf("%d",&ch);

		if(ch<1 && ch>3)
		{
			clrscr();
			printf("\n\t\tInvalide choice...");
			goto m;
		}

		switch(ch)
		{
			case 1:

				delet(arr);
				dis(arr);
				break;
			case 2:
				updat(arr);
				dis(arr);
				break;
		}
	}while(ch!=3);
}
void dis(int arr[20])
{
	int i;
	for(i=0;i<n;i++)
		printf("\t%d",arr[i]);
}
void delet(int arr[20])
{
	int pos,i,j,temp;
	printf("\n\tEnter position to delete element :::¯--->");
	scanf("%d",&pos);
	if(pos<=n)
	{
		if(arr[pos]==0)
		{
			printf("\n\tElement already deleted...\n");
		}
		else
		{
			pos--;
			printf("\n\t%d is Deleted Successful..\n",arr[pos]);
			for(j=pos;j<n-1;j++)
			{
				arr[j]=arr[j+1];
			}
			n--;
		}
	}
	else
	{
		printf("\n\tInvalide Position..\n");
	}
}
void updat(int arr[20])
{
	int pos,ele;
	printf("\n\tEnter position to update element :::¯--->");
	scanf("%d",&pos);
	if(pos<=n)
	{
		printf("\n\tEnter Element :::¯--->");
		scanf("%d",&ele);
		pos--;
		arr[pos]=ele;
		printf("\n\tElement Updated Successful..\n");

	}
	else
	{
			printf("\n\tInvalide Position..");
	}
}