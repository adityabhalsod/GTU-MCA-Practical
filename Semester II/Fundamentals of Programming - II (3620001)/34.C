#include<stdio.h>
#include<conio.h>
int flag=0;
struct link
{
	int data;
	struct link *next;
};
void in_last(struct link **);
void create(struct link **);
void display(struct link *);
void main()
{
	int ch;
	struct link *head=NULL;
	clrscr();
	do
	{
		do
		{
			clrscr();
			printf("\n\t1-Insert\n\t2-exit");
			printf("\n\tEnter Your Choice...");
			scanf("%d",&ch);
			if(ch==2)
				exit();
			else if(ch<1 || ch>2)
			{
				printf("\n\tInvalide Choice ... Please try again..");
				getch();
			}
		}while(ch<1 || ch>2);
		switch(ch)
		{
			case 1:
				in_last(&head);
				display(head);
				break;
		}
		getch();
	}while(1);
}
void create(struct link **head)
{
	int ele;
	struct link *temp;
	temp=(struct link *)malloc(sizeof(struct link ));
	printf("\n\tEnter First Element...");
	scanf("%d",&ele);
	temp->data=ele;
	temp->next=NULL;
	*head=temp;
	printf("\n\tLinked List Created...success...");

}
void in_last(struct link **head)
{
	int ele;
	struct link *temp,*h;
	h=*head;
	if(*head==NULL)
	{
		create(head);
	}
	else
	{
		printf("\n\tEnter Element ...");
		scanf("%d",&ele);
		temp=(struct link *)malloc(sizeof(struct link));
		temp->data=ele;
		while(h->next!=NULL)
		{
			h=h->next;
		}
		h->next=temp;
		temp->next=NULL;
	}
}
void display(struct link *head)
{
	flag=0;
	printf("\n");
	while(head!=NULL)
	{
		printf("\t%d",head->data);
		head=head->next;
		flag++;
	}
	printf("\n\n\ttotal elements=%d",flag);
}