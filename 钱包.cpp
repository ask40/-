#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int f1(char b[])/*��λ������ת����*/ 
{int t;
if(strcmp(b,"��")==0)
 t=0;
 else if(strcmp(b,"һ")==0)
t=1;
 else if(strcmp(b,"��")==0)
 t=2;
 else if(strcmp(b,"��")==0)
 t=3;
 else if(strcmp(b,"��")==0)
 t=4;
 else if(strcmp(b,"��")==0)
 t=5;
 else if(strcmp(b,"��")==0)
 t=6;
 else if(strcmp(b,"��")==0)
 t=7;
 else if(strcmp(b,"��")==0)
 t=8;
 else if(strcmp(b,"��")==0)
t=9;
else if(strcmp(b,"ʮ")==0)
t=10;
 return t;
}
int f2(char d[])/*�㵽��ʮ�ź���ת����*/ 
{
	char a[100];
	int l;
		if(strlen(d)==2)
	l=f1(d);
	else if(strlen(d)==4)
	{
   	    a[0]=d[0];
        a[1]=d[1];
    	a[2]='\0';
	    if(strcmp(a,"ʮ")!=0){
	   l=f1(a)*10;
	}else
	{
    	a[0]=d[2];
    	a[1]=d[3];
    	a[2]='\0';
	{
	    l=f1(a)+10;
	}
	}
	}
	else
	{a[0]=d[0];a[1]=d[1];a[2]='\0';
	{l=f1(a)*10;
	}
	a[0]=d[4];a[1]=d[5];a[2]='\0';
	{
	l=l+f1(a);
	}}
	 return l;
}
void f3(int t)/*����ת����*/ 
{if(t==0)
 printf("��");
 if(t==1)
 printf("һ");
 if(t==2)
 printf("��");
 if(t==3)
 printf("��");
 if(t==4)
 printf("��");
 if(t==5)
 printf("��");
 if(t==6)
 printf("��");
 if(t==7)
 printf("��");
 if(t==8)
 printf("��");
 if(t==9)
 printf("��"); 
}
int main(int argc,char *argv[])
{
	char a[20],b[5],c[5],d[5],e[5],f[5];
	int t,t1,t2,n,i,l;
	 if(argc!=1){ 
      freopen(argv[1],"r",stdin);
  } 
	scanf("%s%s%s%s",e,a,f,b);
	
	t=f2(b);
	for(i=0;;i++)
	{scanf("%s",b);
	if(strcmp(b,"����")==0)
	{scanf("%s",c);
	break; 
	}
	else{
		scanf("%s",c);
		if(strcmp(c,"����")==0)
		{scanf("%s",d);
	 t=t+f2(d);
	}
	else 
		{scanf("%s",d);
	 t=t-f2(d);
	}}} 
	if(t/10==0)
	f3(t);
	else
	{t2=t%10;
	t1=t/10;
	if(t1==1)
	{printf("ʮ");
	f3(t2);
	}
	else if(t2==0)
	{f3(t1);
	printf("ʮ");
	}
	else
	{f3(t1);
	printf("ʮ");
	f3(t2);
	}}
	return 0;
 }  
