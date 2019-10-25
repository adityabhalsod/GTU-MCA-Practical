#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void bubble(int [],int);
void merge(int [],int [],int [],int,int);
void main()
{
	FILE *fp1,*fp2,*fp3;
	int n1,n,i,j,arr1[20],arr2[20],arr3[40],temp1,temp2;
	char file1[]="f1.txt";
	char file2[]="f2.txt";
	char file3[]="f3.txt";
	clrscr();
	fp1=fopen(file1,"w");
	if(!fp1)
		printf("\n\tFail to open file");
	printf("\n\tEnter total number you want to enter in first file..");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	       printf("\tEnter %d Number.",i);
	       scanf("%d",&n1);
	       fprintf(fp1,"%d\t",n1);
	}
	fclose(fp1);
	fp2=fopen(file2,"w");
	if(!fp2)
		printf("\n\tFail to open file");
	printf("\n\tEnter total number you want to enter in second file..");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	       printf("\tEnter %d Number.",i);
	       scanf("%d",&n1);
	       fprintf(fp2,"%d\t",n1);
	}
	fclose(fp2);
	if(!(fp1=fopen(file1,"r")))
		printf("\n\tOpen to Fail...");
	temp1=0;
	printf("\n\tContent of f1 file..");
	while(fscanf(fp1,"%d",&n1)!=EOF)
	{
		arr1[temp1]=n1;
		temp1++;
		printf("\t%d",n1);
	}
	fcloseall();
	if(!(fp2=fopen(file2,"r")))
		printf("\n\tOpen to Fail...");
	temp2=0;
	printf("\n\tContent of f2 file..");
	while(fscanf(fp2,"%d",&n1)!=EOF)
	{
		arr2[temp2]=n1;
		temp2++;
		printf("\t%d",n1);
	}
	fcloseall();
	bubble(arr1,temp1);
	bubble(arr2,temp2);
	fp1=fopen(file1,"w");
	for(i=0;i<temp1;i++)
	{
	       fprintf(fp1,"%d\t",arr1[i]);
	}
	fclose(fp1);
	fp2=fopen(file2,"w");
	for(i=0;i<temp2;i++)
	{
	       fprintf(fp2,"%d\t",arr2[i]);
	}
	fclose(fp2);

	printf("\n\tContent of sorted f1 File...");
	fp1=fopen(file1,"r");
	while(fscanf(fp1,"%d",&n1)!=EOF)
	{
		printf("\t%d",n1);
	}
	fclose(fp1);
	printf("\n\tContent of sorted f2 File...");
	fp2=fopen(file2,"r");
	while(fscanf(fp2,"%d",&n1)!=EOF)
	{
		printf("\t%d",n1);
	}
	fclose(fp2);
	merge(arr1,arr2,arr3,temp1,temp2);
	fp3=fopen(file3,"w");
	for(i=0;i<(temp1+temp2);i++)
	{
	       fprintf(fp3,"%d\t",arr3[i]);
	}
	fclose(fp3);
	printf("\n\tContnt of merged file ....");
	fp3=fopen(file3,"r");
	while(fscanf(fp3,"%d",&n1)!=EOF)
	{
		printf("\t%d",n1);
	}
	getch();
}
void merge(int arr1[],int arr2[],int arr3[],int n1,int n2)
{
	int i=0,j=0,k=0;

		while(i<n1 && j<n2)
		{
			if(arr1[i]<arr2[j])
			{
				arr3[k]=arr1[i];
				i++;
				k++;
			}
			else
			{
				arr3[k]=arr2[j];
				k++;
				j++;
			}
		}
		while(i<n1)
		{
			arr3[k]=arr1[i];
			i++;
			k++;
		}
		while(j<n2)
		{
			arr3[k]=arr2[j];
			j++;
			k++;
		}
}
void bubble(int arr[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=1;j<n-i;j++)
		{
			if(arr[j]<arr[j-1])
			{
				temp=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=temp;
			}
		}
	}
}