#include "stdio.h"
#include "conio.h"
#include<stdio.h>
#include<dos.h>
int main( )
{
	FILE *fp, *ft ;
	char another, choice ;
	struct emp
	{
		int eno;
		char name[40] ;
		int bs ;
		int da,hra,conv,med;
	} ;
	struct emp e ;
	struct date D;
	float total;
	char empname[40] ;
	long int recsize ;
	clrscr();
	fp = fopen ( "salary", "rb+" ) ;
	if ( fp == NULL )
	{
		fp = fopen ( "salary", "wb+" ) ;
		if ( fp == NULL )
		{
			puts ( "Cannot open file" ) ;
			exit( ) ;
		}
	}
	recsize = sizeof ( e ) ;

	fseek ( fp, 0 , SEEK_END ) ;
	printf ( "\nEnter Emp no,name, basic salary,DA,HRA,CONV and MED " ) ;
	scanf ( "%d %s %d %d %d %d %d",&e.eno,e.name, &e.bs,&e.da,&e.hra,&e.conv,&e.med ) ;
	fwrite ( &e, recsize, 1, fp ) ;


	rewind ( fp ) ;
	fseek ( fp, -recsize , SEEK_CUR ) ;
	while ( fread ( &e, recsize, 1, fp ) == 1 )
	printf ( "\n %d %s %d %d %d %d %d",e.eno,e.name, e.bs,e.da,e.hra,e.conv,e.med) ;
	fcloseall();
	getdate(&D);
	printf("\n\n\t\t\tSHREE KRISHNA CHEMISTS AND DRUGGIST");
	printf("\n\t\t\t\tSALARY MONTH %d %d\n",D.da_mon,D.da_year);
	printf("\n\n\tEMP.NO.: %d\t\tEMP.NAME: %s",e.eno,e.name);
	printf("\t\tPAY RATE: 350.00\t\tGEN.DATE:%d/%d/%d ",D.da_day,D.da_mon,D.da_year);
	printf("\n\t______________________________________________________________________");
	printf("\n\n\tEARNINGS\tAMOUNT(RS.)\t\tDEDUCTIONS\tAMOUNT(RS.)");
	printf("\n\t______________________________________________________________________");
	printf("\n\n\tBASIC PAY\t%d\t\t\tDA.\t\t%d",e.bs,e.da);
	printf("\n\n\tHRA\t\t%d\t\t\tCONV.\t\t%d",e.hra,e.conv);
	printf("\n\n\t\t\t\t\t\tMED\t\t%d",e.med);
	printf("\n\n\t______________________________________________________________________");
	total=e.bs+e.da+e.hra+e.conv+e.med;
	printf("\n\t\t\t\t\t\tNET PAY\t\t%.2f",total);
	printf("\n\t______________________________________________________________________");

	getch();
	return 0;
}