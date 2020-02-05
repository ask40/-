#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int f1(char b[])/*个位数汉字转数字*/ 
{int t;
if(strcmp(b,"零")==0)
 t=0;
 else if(strcmp(b,"一")==0)
t=1;
 else if(strcmp(b,"二")==0)
 t=2;
 else if(strcmp(b,"三")==0)
 t=3;
 else if(strcmp(b,"四")==0)
 t=4;
 else if(strcmp(b,"五")==0)
 t=5;
 else if(strcmp(b,"六")==0)
 t=6;
 else if(strcmp(b,"七")==0)
 t=7;
 else if(strcmp(b,"八")==0)
 t=8;
 else if(strcmp(b,"九")==0)
t=9;
else if(strcmp(b,"十")==0)
t=10;
 return t;
}
int f2(char d[])/*零到九十九汉字转数字*/ 
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
	    if(strcmp(a,"十")!=0){
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
int main()
{
	char b[10],a[10];
	int i,n=10,c[10]={0,5,10,11,15,20,27,35,90,99};
	
	freopen("C:\\Users\\86151\\Desktop\\编程作业\\test2.txt","r",stdin);
	for(i=1;i<n;i++)
	{
		scanf("%s",b);
		if(f2(b)==c[i-1])
		printf("测试通过\n\n"); 
		else
		printf("测试失败\n\n");
	}
	return 0;
 } 
