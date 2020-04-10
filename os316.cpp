#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
float pf,pfn,pm,pmn,mat,succ,success,fail,failure,et,pasr,losr,mr,fn,fi,pn;
float n=1000000;
printf("Time For A Page Fault For Empty Page :\n ");
scanf("%f", &pf);
pfn=pf*n;
float pfn1=pfn;
printf("Time For Modified Page :\n");
scanf("%f", &pm);
pmn=pm*n;
float pmn1=pmn;
printf("Enter Memory Access Time :\n");
scanf("%f", &mat);
float mat1=mat;
printf("Reading Updated Page Percentage :\n");
scanf("%f", &succ);
success=succ/100;
fail=100-succ;
int a=fail;
failure=fail/100;
printf("Reading Unupdated Page Percetnage:%d%%",a,"%");
printf("\nEnter The Effective Time : ");
scanf("%f", &et);
losr=failure *pfn1;
	float losr1=losr;
	pasr=success*pmn1;
	float pasr1=pasr;
	mr=mat+pasr1+losr1;
	float mr1=mr;
	fn=mat1-mr1;
	float fn1=fn;
	fi=mat1-et;
	float fi1=fi;
	pn=fi1/fn1;
printf("Therefore Page Fault Related To Above Details is : ");
printf("\n\n is:%f ns.\n",pn);
return 0;
} 
