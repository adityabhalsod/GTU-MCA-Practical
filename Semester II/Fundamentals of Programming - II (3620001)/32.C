#include<stdio.h>
#include<conio.h>
int flag=0;
struct link
{
	int data;
	struct link *next;
};
void in_first(struct link **);
void in_last(struct link **);
void del_first(struct link **);
void del_last(struct link **);
void display(struct link *);
void create(struct link **);
void bubblesort(struct link *);
void swap(struct link *a, struct link *b);
void main()
{
	int ch;
	struct link *head=NULL;
	do
	{
		do
		{
			clrscr();
			printf("\n\t1-Insert at First\n\t2-INsert at Last\n\t3-Delete from First\n\t4-Delete from Last\n\t5-Sort\n\t6-exit");
			printf("\n\tEnter Your Choice...");
			scanf("%d",&ch);
			if(ch==6)
				exit();
			else if(ch<1 || ch>6)
			{
				printf("\n\tInvalide Choice ... Please try again..");
				getch();
			}
		}while(ch<1 || ch>6);
		switch(ch)
		{
			case 1:
				in_first(&head);
				display(head);
				break;
			case 2:
				in_last(&head);
				display(head);
				break;
			case 3:
				del_first(&head);
				display(head);
				break;
			case 4:
				del_last(&head);
				display(head);
				break;
			case 5:
				bubblesort(head);
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
void in_first(struct link **head)
{
	int ele;
	struct link *temp;
	if(*head==NULL)
	{
		create(head);
	}
	else
	{
		printf("\n\tEnter Element...");
		scanf("%d",&ele);
		temp=(struct link *)malloc(sizeof(struct link));
		temp->data=ele;
		temp->next=*head;
		*head=temp;
	}
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
void del_first(struct link **head)
{
	struct link *h;
	h=*head;
	if(*head==NULL)
	{
		printf("\n\n\tlist is Empty..");
	}
	else
	{
		printf("\n\t%d is Deleted...",h->data);
		h=h->next;
		free(*head);
		*head=h;
	}
}
void del_last(struct link **head)
{
	struct link *temp,*h1,*h2;
	h1=*head;
	if(*head==NULL)
	{
		printf("\n\n\tList is Empty...");
	}
	else
	{
		if(h1->next==NULL)
		{
			printf("\n\n\t%d is Deleted...",h1->data);
			free(*head);
			*head=NULL;
		}
		else
		{
			while(h1->next!=NULL)
			{
				h2=h1;
				h1=h1->next;
			}
			printf("\n\n\t%d is Deleted...",h1->data);
			h2->next=NULL;
			free(*h1);
		}
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
void bubblesort(struct link *start)
{
	int swapped, i;
    struct link *ptr1;
    struct link *lptr = NULL;
    if (start == NULL)
	return;
    do
    {
	swapped = 0;
	ptr1 = start;

	while (ptr1->next != lptr)
	{
	    if (ptr1->data > ptr1->next->data)
	    {
		swap(ptr1, ptr1->next);
		swapped = 1;
	    }
	    ptr1 = ptr1->next;
	}
	lptr = ptr1;
    }
    while (swapped);
}
void swap(struct link *a, struct link *b)
{
    int temp = a->data;
    a->data = b->data;
    b->data = temp;
}