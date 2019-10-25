#include <stdio.h>
#include <conio.h>
int main()
{
	FILE *fp;
	int z=0;
	char c,user[20],pass[20];
	char username[20],password[20];
	clrscr();
	printf("\n\tEnter Username...");
	gets(username);
	printf("\n\tEnter PAssword...");
	gets(password);
	fp = fopen("log.txt", "w");
	if(fp==NULL)
	{
		printf("Unable to open the fi le for writing");
		getch();
		exit(0);
	}
	fprintf(fp, "%s\t","root");
	fprintf(fp, "%s\t","admin");
	fclose(fp);
	fp=fopen("log.txt","r");
	if(!fp)
	{
		printf("\n\tFIle Not open to read data");
		getch();
		exit(0);
	}
	fscanf(fp,"%s",user);
	fscanf(fp,"%s",pass);
	if(strcmp(user,username)==0)
	{
		if(strcmp(pass,password)==0)
			printf("\n\tCongrates.. login successful");
	}
	else
		printf("\n\tSorry! Login failed..");
	fclose(fp);
	getch();
	return 0;
}