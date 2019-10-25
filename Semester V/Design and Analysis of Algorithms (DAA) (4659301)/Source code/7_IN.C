/**
Program : 7
Binary Search of an ordered array. Iterative and Recursive algorithms are possible.
-->Iterative method
*/

#include<stdio.h>
#include<conio.h>

void bubble_sort(int [],int);
void binary_search(int [],int,int);

/* starting point of the program */
int main()
{
	int arr[25],i,x,n;
	// clrscr();
	printf("Enter the number of elements > ");
	scanf("%d", &n);
	printf("---Enter array elements---\n");

	for(i=0;i<n;i++)
	{
		printf("Array[%d]:-",i+1);
		scanf("%d", &arr[i]);
	}
		bubble_sort(arr,n); //function call
		printf("\n---After sorting method apply then print array---\n");
		printf("New Array:-");
		for(i=0;i<n;i++)
		{
			if((i+1)==n)
				printf("%d",arr[i]);
			else
				printf("%d, ",arr[i]);
		}
		printf("\n  Postion:-");

		for(i=0;i<n;i++)
		{
			printf("%d  ",i+1);
		}
		printf("\n\n");
		printf("Enter the element to be searched > ");
		scanf("%d", &x);
		binary_search(arr,n,x);
getch();
return 0;
}

/* utility function to sort elements in ascending order */
void bubble_sort(int arr[],int n)
{
	int i,j,t;
		for(i= n-2; i>=0 ;i--)
		{
			for( j = 0; j<= i;j++)
			{
					if(arr[j] > arr[j+1])
					{
						t = arr[j];
						arr[j] = arr[j+1];
						arr[j+1] = t;
					}
			}
		}
}

/* utility function to search the element */
void binary_search(int arr[],int n,int x)
{
int left,right,mid;

left=0;
right= n-1;

	while(left <= right)
	{
		mid = (left+right)/2; //formula to find mid

		if(x == arr[mid])
			break;

		if(x > arr[mid])
			left = mid + 1;
		else
			right = mid - 1;
	}

	if(left>right)
		printf("\nAnswer:- %d element not found in array !!! ", x);
	else
		printf("\nAnswer:- %d element is found at %d position in array ", x,mid+1);

}