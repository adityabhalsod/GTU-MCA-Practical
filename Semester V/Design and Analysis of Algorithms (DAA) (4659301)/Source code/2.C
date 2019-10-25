/*
Program 2 :
Determine smallest divisor of an integer.
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int no,i,ch;
	//clrscr();
	printf("Enter the Numebr :- ");
	scanf("%d",&no);
	if(no%2==0)
	{
		printf("2\t");
	}
	else
	{
		ch=0;
		for(i=3;i<=sqrt(no);i++)
		{
			if(no%i==0)
			{
				printf("%d",i);
				ch=1;
				break;
			}
		}
		if(ch==0)
		{
			printf("Number is Prime : %d",no);
		}
	}
	getch();
	return 0;
}