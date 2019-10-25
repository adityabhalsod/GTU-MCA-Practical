#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	int n,n1,i,max=0;
	clrscr();
	fp=fopen("max.txt","w");
	if(!fp)
		printf("\n\tFail to open file");
	printf("\n\tEnter total number you want to enter ...(max - 10)");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	       printf("\n\tEnter %d Number.",i);
	       scanf("%d",&n1);
	       fprintf(fp,"%d\t",n1);
	}
	fclose(fp);
	fopen("max.txt","r");
	printf("\n\tCOntent of file..");
	while(fscanf(fp,"%d",&n)!=EOF)
	{
		printf("%d\t",n);
	}
	fclose(fp);
	fopen("max.txt","r");
	while(fscanf(fp,"%d",&n)!=EOF)
	{
		if(n>max)
			max=n;
	}
	printf("\n\tMax Number is ... %d",max);
	fclose(fp);
	getch();
}