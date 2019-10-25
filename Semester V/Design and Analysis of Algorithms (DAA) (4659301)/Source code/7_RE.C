/**
Program : 7
Binary Search of an ordered array. Iterative and Recursive algorithms are possible.
-->Recursive method
*/
#include <stdio.h>
#include <conio.h>
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
int binarySearch(int array[], int low, int high, int x)
{
	int mid;

	if (low > high)
		return -1;

	mid = (low + high)/2;	// overflow can happen

	if (x == array[mid])
		return mid;
	else if (x < array[mid])
		return binarySearch(array, low,  mid - 1, x);
	else
		return binarySearch(array, mid + 1,  high, x);
}


int main()
{
	int array[25],n,i,x,m;
	int low = 0, high;
	int index;


	// clrscr();

	printf("Enter the number of elements > ");
	scanf("%d", &n);
	printf("---Enter array elements---\n");

	for(i=0;i<n;i++)
	{
		printf("Array[%d]:-",i+1);
		scanf("%d", &array[i]);
	}
	
	bubble_sort(array,n); //function call
	
	printf("\n---After sorting method apply then print array---\n");
	printf("New Array:-");
	for(i=0;i<n;i++)
	{
		if((i+1)==n)
			printf("%d",array[i]);
		else
			printf("%d, ",array[i]);
	}
	printf("\n  Postion:-");

	for(i=0;i<n;i++)
	{
		printf("%d  ",i+1);
	}
	printf("\n\n");
	printf("Enter the element to be searched > ");
	scanf("%d", &x);

	low = 0, high = n - 1;

	index = binarySearch(array, low, high, x);

	if (index != -1)
		printf("\nAnswer:- %d element is found at %d position in array ", x,index+1);
	else
		printf("\nAnswer:- %d element not found in array !!! ", x);	

	getch();
	return 0;
}