#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct tree
{
	int info;
	struct tree *left;
	struct tree *right;
}*temp;

int create();
struct tree *insert(struct tree *root,int item);
void DFS(struct tree *root);
void DFSsearch(struct tree *root,int i);
main()
{
	struct tree *root=NULL;
	int choice,item,i,x,no;

	do
	{
		printf("\n**********MENU*********\n");
		printf("\n1. Create\n2. Insert\n3. DFS View\n4. Search Element\n5. Exit\n");
		printf("\n************************\n");

		printf("\nEnter Your Choice :\n");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
				no=create();
				break;
			case 2:
				for(i=0;i<no;i++)
				{
					printf("\nEnter the Element\n");
					scanf("%d",&item);
					root=insert(root,item);
				}
				break;
			case 3:
				DFS(root);
				break;
			case 4:
				printf("Enter the Element to search\n");
				scanf("%d",&item);
				DFSsearch(root,item);
				break;
			case 5:
				printf("Exit\n");
				break;
			default:
				printf("Not Valid");
				exit(0);
		}
	}while(choice!=5);
	getch();
}


int create()
{
	int n;

	printf("\nEnter the Number of Number\n");
	scanf("%d",&n);


	temp=malloc(n * sizeof(struct tree));
	if(temp==NULL)
	{
		printf("\nNot Allocated\n");
	}
	else
	{
		printf("\nCreated Successfully\n");
	}
	return n;
}
struct tree *insert(struct tree *root,int item)
{
	if(root==NULL)
	{
		root=malloc(sizeof(struct tree));
		root->info=item;
		root->left=NULL;
		root->right=NULL;
	}
	else if(item < root->info)
	{
		root->left=insert(root->left,item);
	}
	else
	{
		root->right=insert(root->right,item);
	}
	return root;
}
void DFS(struct tree *root)
{
	if(root)
	{
		if(root->left)
		{
			DFS(root->left);
		}
		if(root->right)
		{
			DFS(root->right);
		}
		printf("%d\t",root->info);
	}
}

void DFSsearch(struct tree *root,int item)
{
	if(root)
	{
		if(root->left)
		{
			DFSsearch(root->left,item);
		}
		if(root->right)
		{
			DFSsearch(root->right,item);
		}
		if(root->info==item)
		{
			printf("\nYour Element is Found : %d",root->info);
		}
	}
}
