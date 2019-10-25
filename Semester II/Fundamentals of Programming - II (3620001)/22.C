#include<stdio.h>
#include<string.h>

int main() {
  FILE *fp;
  int gotit,num=0,line=0,i;
  char *ptr;
  char buff[BUFSIZ],ch;
  char target[20];
  clrscr();
  printf("\n\tEnter Target String..");
  fflush(stdin);
  gets(target);
  fp=fopen("mm.txt","r");

  if(fp==NULL)  {
    printf("File couldn't be opened ");
    return 1;
  }
  gotit = 0;

  while(1)
  {
	ch=fgetc(fp);
	if(ch=='\n')
		line++;
	if(ch==EOF)
		break;
  }
  fcloseall();
  fp=fopen("mm.txt","r");

  if(fp==NULL)  {
    printf("File couldn't be opened ");
    return 1;
  }
  for(i=0;i<line;i++)
  {
    fgets(buff, BUFSIZ, fp);
    ptr = strstr(buff, target);
    if(ptr )
    {
      printf("\n The substring starts at the %d char", ptr-buff);
      printf("\n\t\t%s",buff);
      gotit = 1;
      num++;
    }
  }

  fflush(fp);
  fclose(fp);

  if(!gotit)
	printf("\n The target string was not found");
  else
	printf("\n\tString Found %d Times...",num);

  printf("\n\n\t\t\t     press enter when ready");
  gotit = getchar();
  return 0;
}