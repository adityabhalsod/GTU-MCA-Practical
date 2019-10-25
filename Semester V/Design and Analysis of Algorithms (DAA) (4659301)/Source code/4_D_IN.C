/*
Program : 4
Find Xn. Iterative and recursive algorithms are possible with complexity log 2n
-->Iterative method using D&C algorithms
*/

#include<stdio.h>
#include<conio.h>
long long power(long x,long n);
int main()
{
	long x,n,ans;
	//clrscr();

	printf("Enter X-->");
	scanf("%ld",&x);
	printf("Enter N-->");
	scanf("%ld",&n);

	ans=power(x,n);
	printf("Your Ans is %lld\n",ans);
	getch();
	return 0;	
}
long long power(long x,long n)
{
	int i,count=1;
	long long ans=1;
	if(n==0)
	{
		count=count+1;
		printf("Number of Iteration is :  %d\n",count);
		return 1;
	}
	if(n%2==0)
	{
		for(i=1;i<=n/2;i++)
		{
			ans=ans*x;
			count=count+1;
		}
		printf("Number of Iteration is :  %d\n",count);
		return ans*ans;
	}
	else
	{
		for(i=1;i<=n/2;i++)
		{
			ans=ans*x;
			count=count+1;
		}
		printf("Number of Iteration is :  %d\n",count);
		return x*ans*ans;
	}

}