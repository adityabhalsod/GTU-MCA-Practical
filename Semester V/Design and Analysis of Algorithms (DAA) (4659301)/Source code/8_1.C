/*
Program : 8
Sort a given sequence of numbers using 
(a) Bubble Sort
*/
#include <stdio.h>
#include <conio.h> 
int main()
{
  int array[100], n, i, j, swap;

  // clrscr();

  printf("Enter number of elements:-");
  scanf("%d", &n);



  for (i = 0; i < n; i++)
  {
	printf("Array[%d]:-",i);
	scanf("%d", &array[i]);
  }


  for (i = 0 ; i < n - 1; i++)
  {
    for (j = 0 ; j < n - i - 1; j++)
    {
      if (array[j] > array[j+1]) /* For decreasing order use */
      {
        	swap       = array[j];
        	array[j]   = array[j+1];
        	array[j+1] = swap;
      }
    }
  }

  printf("Sorted list in ascending order:");

  for (i = 0; i < n; i++)
  {
	if(i+1==n)
		printf("%d", array[i]);
	else
		printf("%d ,", array[i]);
  }


 getch();
 return 0;
}