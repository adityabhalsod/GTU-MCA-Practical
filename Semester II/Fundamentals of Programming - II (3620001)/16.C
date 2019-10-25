#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	FILE *fp,*fp1;
	int n1,n,i,j,arr[20],temp;
	char file1[]="unsorted.txt";
	char file2[]="sorted.txt";
	clrscr();
	fp=fopen(file1,"w");
	if(!fp)
		printf("\n\tFail to open file");
	printf("\n\tEnter total number you want to enter..");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	       printf("\tEnter %d Number.",i);
	       scanf("%d",&n1);
	       fprintf(fp,"%d\t",n1);
	}
	fclose(fp);
	fp=fopen(file1,"r");
	temp=0;
	printf("\n\tContent of Unsorted file..");
	while(fscanf(fp,"%d",&n1)!=EOF)
	{
		arr[temp]=n1;
		temp++;
		printf("\t%d",n1);
	}

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
	fcloseall();
	fp1=fopen(file2,"w");
	for(i=0;i<n;i++)
	{
	       fprintf(fp,"%d\t",arr[i]);
	}
	fclose(fp);
	printf("\n\tContent of Sorted File...");
	fp1=fopen(file2,"r");
	while(fscanf(fp1,"%d",&n1)!=EOF)
	{
		printf("\t%d",n1);
	}
	fclose(fp1);
	getch();
}