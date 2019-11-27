#include<stdio.h>
#include<conio.h>

void asse(int [],int);
void desse(int [],int);
void dis(int [],int);

void main()
{
	int arr[20],n,i,ch;
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
	dis(arr,n);
	do
	{
		m:
		printf("\n\t1-Assending\n\t2-Dessending\n\t3-Exit");
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
				printf("\n\tAssending:::¯--->");
				asse(arr,n);
				dis(arr,n);
				break;
			case 2:
				printf("\n\tDessending:::¯--->");
				desse(arr,n);
				dis(arr,n);
				break;
		}
	}while(ch!=3);
}
void dis(int arr[20],int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("\t%d",arr[i]);

}
void asse(int arr[20],int n)
{
	int j,k,temp;
	for(j=0;j<n;j++)
	{
		for(k=0;k<n;k++)
		{
			if(arr[k]>arr[j])
			{
				temp=arr[j];
				arr[j]=arr[k];
				arr[k]=temp;
			}
		}
	}
}
void desse(int arr[20],int n)
{
	int j,k,temp;
	for(j=0;j<n;j++)
	{
		for(k=0;k<n;k++)
		{
			if(arr[k]<arr[j])
			{
				temp=arr[j];
				arr[j]=arr[k];
				arr[k]=temp;
			}
		}
	}
}
