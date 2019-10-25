#include<stdio.h>
#include<string.h>
 
int main() {
  FILE *fp;
  int gotit;
  char *ptr;
  char buff[BUFSIZ];
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
  while((fgets(buff, BUFSIZ, fp))!=EOF) {
    ptr = strstr(buff, target);
    if(ptr)
    {
      printf("\n The substring starts at the %d char", ptr-buff);
      printf("\n\n\t%s",buff);
      gotit = 1;
      break;
    }
  }
  fflush(fp);
  fclose(fp);

  if(!gotit)
    printf("\n The target string was not found");

  printf("\n\n\t\t\t     press enter when ready");
  gotit = getchar();
  return 0;
}