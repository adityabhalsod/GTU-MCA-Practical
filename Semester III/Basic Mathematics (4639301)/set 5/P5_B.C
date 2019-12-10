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
int leaf(struct tree *root);
int totalnode(struct tree *root);
int intermediatenode(struct tree *root);
main()
{
	struct tree *root=NULL;
	int choice,item,i,x,no,tleaf,tn,in;
	clrscr();
	do
	{
		printf("\n**********MENU*********\n");
		printf("\n1. Create\n2. Insert\n3. Inorder\n4. Leaf Node\n5. Intermediate Node\n6. Total Number of Node\n7. Exit\n");
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
				tleaf=leaf(root);
				printf("\nTotal Number of Leaf Node is : %d\n",tleaf);
				break;
			case 5:
				in=intermediatenode(root);
				printf("\nNumber of Inter Mideate Node is : %d\n",in);
				break;
			case 6:
				tn=totalnode(root);
				printf("\nTotal Number of Node is : %d\n",tn);
				break;
			case 7:
				printf("\nExit\n");
				break;
			default:
				printf("Not Valid");
				exit(0);
		}
	}while(choice!=7);
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
int leaf(struct tree *root)
{
	if(root==NULL)
	{
		return 0;
	}
	else if(root->left==NULL && root->right==NULL)
	{
		return 1;
	}
	else
	{
		return leaf(root->left)+leaf(root->right);
	}
}
int totalnode(struct tree *root)
{
	int c=1;
	if(root==NULL)
	{
		return 0;
	}
	else
	{
		c=c+totalnode(root->left);
		c=c+totalnode(root->right);
		return c;
	}
}
int intermediatenode(struct tree *root)
{
	struct tree *temp,*temp1;
	int count=0;
	if(root==NULL)
	{
		printf("No Intermediate Node in Tree\n");
	}
	else
	{
		if(root->left==NULL || root->right==NULL)
		{

		}
		else
		{
			if(root->left!=NULL)
			{
				temp=root->left;
				if(temp->left!=NULL || temp->right!=NULL)
				{
					printf("%d\t",root->left->info);
					count++;
				}
				intermediatenode(root->left);
			}
			if(root->right!=NULL)
			{
				temp1=root->right;
				if(temp1->left!=NULL || temp1->right!=NULL)
				{
					printf("%d\t",root->right->info);
					count++;
				}
				intermediatenode(root->right);
			}
		}
	}
	return count;
}