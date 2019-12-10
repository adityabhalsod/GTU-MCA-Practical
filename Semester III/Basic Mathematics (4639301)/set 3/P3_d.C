#include<stdio.h>
#include<conio.h>
int itrative_fibonacci(int no);
int recursivee_fibonacci(int no);
main()
{
	int no,c,i;
	
	printf("Enter the Number : ");
	scanf("%d",&no);

	printf("\nItrative Fibonacci series\n");
	itrative_fibonacci(no);
	
	printf("\nRecursive Fibonacci series\n");
 
   	for (c=1;c<=no;c++)
   	{
    	printf("%d\t", recursivee_fibonacci(i));
    	i++; 
  	}
}
int itrative_fibonacci(int no)
{
	int n1=0,n2=1,n3,i;

	printf("%d\t",n2);
	for(i=1;i<no;i++)
	{
		n3=n1+n2;
		printf("%d\t",n3);
		n1=n2;
		n2=n3;	
	}
}
int recursivee_fibonacci(int no)
{
	if (no==0)
	{
		return 0;	
	}   
   	else if(no==1)
   	{
   		return 1;	
	}
    else
    {
    	return (recursivee_fibonacci(no-1) + recursivee_fibonacci(no-2));	
	}
}
