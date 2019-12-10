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
void inorder(struct tree *root);
void preorder(struct tree *root);
void postorder(struct tree *root);

main()
{
	struct tree *root=NULL;
	int choice,item,i,x,no;
	clrscr();

	do
	{
		printf("\n**********MENU*********\n");
		printf("\n1. Create\n2. Insert\n3. Inorder\n4. Preorder\n5. Postorder\n6. Exit\n");
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
					printf("Element Inserted is : %d\n",root->info);
					inorder(root);
				}
				break;
			case 3:
				inorder(root);
				break;
			case 4:
				preorder(root);
				break;
			case 5:
				postorder(root);
				break;
			case 6:
				exit(0);
				break;
			default:
				printf("Not Valid");
				exit(0);
		}
	}while(choice!=6);
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
void inorder(struct tree *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		printf("%d\t",root->info);
		inorder(root->right);
	}
}
void preorder(struct tree *root)
{
	if(root!=NULL)
	{
		printf("%d\t",root->info);
		preorder(root->left);
		preorder(root->right);
	}
}
void postorder(struct tree *root)
{
	if(root!=NULL)
	{
		postorder(root->left);
		postorder(root->right);
		printf("%d\t",root->info);
	}
}
