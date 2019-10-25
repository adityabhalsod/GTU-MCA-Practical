#include<stdio.h>
#include<conio.h>
void insert_first(struct dll **);
void insert_last(struct dll **);
void del_first(struct dll **);
void del_last(struct dll **);
void dis(struct dll *);
void sort(struct dll *);
int count=1;
struct dll
{
	struct dll *pre;
	int data;
	struct dll *next;
};
void main()
{
	struct dll *head=NULL;
	int ch;
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
				insert_first(&head);
				dis(head);
				break;
			case 2:
				insert_last(&head);
				dis(head);
				break;
			case 3:
				del_first(&head);
				dis(head);
				break;
			case 4:
				del_last(&head);
				dis(head);
				break;
			case 5:
				sort(head);
				dis(head);
				break;
		}
		getch();
	}while(1);
}
void sort(struct dll *head)
{
	struct dll *i,*j;
	int t;
	printf("\n\tSorted DATA..");
	for(i=head;i->next!=NULL;i=i->next)
	{
		for(j=i->next;j!=NULL;j=j->next)
		{
			if(i->data > j->data)
			{
				t=j->data;
				j->data=i->data;
				i->data=t;
			}
		}
	}
}
void insert_first(struct dll **p)
{
	struct dll *t,*h;
	int ele;
	h=*p;
	t=(struct dll *)malloc(sizeof(struct dll ));
	printf("\n\n\n\tEnter the New ELement...");
	scanf("%d",&ele);
	if(*p==NULL)
	{
		t->data=ele;
		t->pre=NULL;
		t->next=NULL;
		*p=t;
	}
	else
	{
		t->pre=NULL;
		t->data=ele;
		t->next=*p;
		h->pre=t;
		*p=t;
	}
}

void insert_last(struct dll **p)
{
	struct dll *t,*h;
	int ele;
	h=*p;
	t=(struct dll *)malloc(sizeof(struct dll ));
	printf("\n\n\n\tEnter the New ELement...");
	scanf("%d",&ele);
	if(*p==NULL)
	{
		t->data=ele;
		t->pre=NULL;
		t->next=NULL;
		*p=t;
	}
	else
	{
		t->data=ele;
		while(h->next!=NULL)
		{
			h=h->next;
		}
		t->next=NULL;
		t->pre=h;
		h->next=t;
	}
}
void del_first(struct dll **p)
{
	struct dll *h;
	h=*p;
	if(*p==NULL)
	{
		printf("\n\n\t\tDOUBLE LINKED LIST IS A EMPTY");
	}
	else
	{
		printf("\n\tElement %d is deleted...",h->data);
		h=h->next;
		h->pre=NULL;

		*p=h;
	}
}
void del_last(struct dll **p)
{
	struct dll *h,*h1;
	h=*p;
	if(*p==NULL)
	{
		printf("\n\tList is empty...");
	}
	else if(h->next!=NULL)
	{
		while(h->next!=NULL)
		{
			h=h->next;
		}
		h1=h->pre;
		h1->next=NULL;
		printf("\n\tElement Deleted Is a...%d",h->data);
		free(h);
	}
	else if(h->next==NULL)
	{
		h=*p;
		*p=NULL;
		printf("\n\tElement Deleted Is a...%d",h->data);
	}
}
void dis(struct dll *p)
{
	struct dll *h;
	h=p;
	if(p)
	{
		printf("\n\tNext....");
		while(p!=NULL)
		{
			h=p;
			count++;
			printf("\t%d",p->data);
			p=p->next;
		}

		printf("\n\tPrevious...");
		while(h!=NULL)
		{
			printf("\t%d",h->data);
			h=h->pre;
		}
	}
	else
		printf("\n\tList Empty..");
}