#include<stdio.h>
#include<conio.h>
main()
{
	int a[20],b[20],len,i=0,j=0,alen;
	
	
	printf("\nEnter The Set Length of Set A : ");
	scanf("%d",&alen);
	
	for(i=1;i<=alen;i++)
	{
		printf("a[%d] :",i);
		scanf("%d",&a[i]);
	}
	
	printf("Your set Values Are : \n");	
	printf("{ ");
	for(i=1;i<=alen;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("}\n");
	
	
	printf("Enter The Set Length of Set B : ");
	scanf("%d",&len);
	
	for(i=1;i<=len;i++)
	{
		printf("b[%d] :",i);
		scanf("%d",&b[i]);
	}
	
	printf("Your set Values Are : \n");	
	printf("{ ");
	for(i=1;i<=len;i++)
	{
		printf("%d\t",b[i]);
	}
	printf("}");
	
	printf("\nDifference is : \n");
	printf("{");
    while (i <= alen && j <= len)
    {
        if (a[i] < b[j])
        {
            printf("%d\t",a[i]);
            i++;
        }
        else if (b[j] < a[i])
        {
            printf("%d\t",b[j]);
            j++;
        }
        else
        {
        	i++;
        	j++;
		}
    }
	
    printf("}\n");
}	
	
//	for(i=1;i<=alen;i++)
//	{
//		for(j=1;j<=len;j++)
//		{
//			if(a[i]<b[j])
//			{
//				printf("\n%d\t",a[i]);
//				i++;		
//			}
//			else if(a[i]>b[j])
//			{
//				printf("\n%d\t",b[j]);
//				j++;		
//			}		
//			else
//			{
//				i++;
//				j++;
//			}
//		}
//	}

