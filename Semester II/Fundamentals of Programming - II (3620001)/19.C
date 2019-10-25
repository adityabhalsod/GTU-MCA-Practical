#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *fp;
	char ch;
	int n,i,num,arr[20];

	clrscr();
	fp=fopen("demo1.txt","w");
	if(fp==NULL)
		printf("\n\tFile Not Created...");
	else
		printf("\n\tFile created Successfull....");
	printf("\n\tEnter N..");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n\tEnter Num.");
		scanf("%d",&num);
		fprintf(fp,"%d\n",num);
	}
	fclose(fp);


	printf("\n\tContent Of Demo1.txt:::¯--->");
	fopen("demo1.txt","r");
	i=0;
	while(fscanf(fp,"%d",&num)!=EOF)
	{
		arr[i]=num;
		i++;
	}
	for(i=0;i<n;i++)
		printf("\t%d",arr[i]);
	fclose(fp);
	getch();
	return 0;
}