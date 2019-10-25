/*
Program : 9
Knapsack problem using Greedy algorithm
*/
#include<stdio.h>
#include<conio.h>
 
void knapsack(int n, float weight[], float value[], float W)
{
 float x[20], bag = 0; //bag is like your carry bag
 int i, j, temp; 
 temp=W;//temp store your carry bag size
 
 for (i=0;i< n;i++)
  		x[i]=0.0;
 
 for (i=0;i< n;i++)
 {
	  if(weight[i]>temp)
	  {
		   break;
	  }
	  else
	  {
		   x[i]=1.0;
		   bag  = bag  + value[i];
		   temp = temp - weight[i];
	  }
 }
    //here,jump
 	 // printf("%d",i);
	 if(i< n)
	 {
	       x[i]= temp / weight[i];
	 }
	 
  bag = bag + (x[i]*value[i]);
  printf("\n------------------------------------------------");
  printf("\nweight | ");
  for(i=0;i< n;i++)
  {
  		 printf("%1.2f\t",weight[i]);
  }
  printf("\nvalue  | ");
   
  for(i=0;i< n;i++)
  {
  		 printf("%1.2f\t",value[i]);
  }
  printf("\n   x   | ");
  for(i=0;i< n;i++)
  {
  		 printf("%1.2f\t",x[i]);
  }
 
  printf("\n------------------------------------------------");
  printf("\n Maximum value that knapsack carry is:%.2f", bag);
  printf("\n------------------------------------------------");
 
}
 
int main()
{
 float weight[20], value[20], W;
 int n, i ,j;
 float ratio[20], temp;
 //clrscr();
 printf ("\n Enter number of Objects you want:");
 scanf ("%d", &n);

 printf ("\n\n------Enter the weights and values of each object--------\n\n");
 for (i=0; i< n; i++)
 {
	  printf ("Enter weight for object %d > ",i+1);
	  scanf("%f", &weight[i]);
	  printf ("Enter value for object  %d > ",i+1);
	  scanf("%f",&value[i]);
 }

 printf ("\nEnter the capacity of knapsack:");
 scanf ("%f", &W);
 
 
 for (i=0; i< n; i++)
 {
  		ratio[i]=value[i]/weight[i];
 }
 
 for(i=0; i< n; i++)
 {
	  for(j=i+1;j<  n; j++)
	  {
		   if(ratio[i] < ratio[j])
		   {
		    temp = ratio[j];
		    ratio[j] = ratio[i];
		    ratio[i] = temp;
		 
		    temp = weight[j];
		    weight[j] = weight[i];
		    weight[i] = temp;
		 
		    temp = value[j];
		    value[j] = value[i];
		    value[i] = temp;
		   }
	  }
 }
 knapsack(n, weight, value, W);
 getch();
 return 0;
}