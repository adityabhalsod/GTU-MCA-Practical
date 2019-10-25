/*
Program : 4
Find Xn. Iterative and recursive algorithms are possible with complexity log 2n
-->Recursive method using D&C algorithms
*/
#include<stdio.h>
#include<conio.h>
int count=0;
long long power(int x,int n);
int main()
{
	int x,n;
	long long ans;
	// clrscr();

	printf("Enter X-->");
	scanf("%d",&x);
	printf("Enter N-->");
	scanf("%d",&n);

	ans=power(x,n);
	printf("Your Ans is %lld\n",ans);

	printf("Your Iteration is :%d",count);
	getch();
	return 0;
}
long long power(int x,int n)
{
	long temp;
	if(n==0)
	{
		count++;
		return 1;
	}
	temp=power(x,n/2);
	if(n%2==0)
	{
		count++;
		return temp*temp;
	}
	else
	{
		count++;
		return x*temp*temp;
	}
}
