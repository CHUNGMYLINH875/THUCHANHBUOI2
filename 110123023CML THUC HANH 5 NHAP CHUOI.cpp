#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
int xoa(char s[50],int vitrixoa);
int xoakt(char s[50]);
int chuanhoa(char s[50]);
int demtu(char s[50]);
int demkt(char s[50]);

int main()
{
	char s[50];
	printf(" nhap chuoi s:");gets(s);
	printf(" chuoi vua nhap la :  %s",s);
	chuanhoa(s);
	printf("\nChuoi chuan hoa:");
	puts(s);
	demkt(s);
	demtu(s);
	
}	
	
int xoa(char s[90],int vitrixoa)
{
	int n=strlen(s);
    for(int i=vitrixoa;i<n;i++)
     s[i]=s[i+1];
	s[n-1]='\0'; 
}
int  xoakt(char s[50])
{
    for(int i=0;i<strlen(s);i++)
		if(s[i]==' '&& s[i+1]==' ')
		{
			xoa(s,i);
			i--;
		}
    if(s[0]==' ')
		xoa(s,0);
    if(s[strlen(s)-1]==' ')
		xoa(s,strlen(s)-1);
}
int chuanhoa(char s[50])
{ int i=0;
	strlwr(s);
	xoakt(s);
	s[0]=s[0]-32;
	for(int i=0;i<strlen(s);i++)
		{ 
		if(s[i]==' '&& s[i+1]!=' ')
		    s[i+1]=s[i+1]-32;
		}
}
int demtu(char s[50])
{ int demtu=1;
	strlwr(s);
	for(int i=0;i<strlen(s);i++)
		{ 
		if(s[i]==' ')
		     demtu++;
		}
		printf("\n so tu %d",demtu);
}
int demkt(char s[50])
{ int demkytu=0;
  char c,c1;
	printf("\n Nhap mot ky tu:= ");
	scanf("%c",&c);
		fflush(stdin);
  	strupr(s);
    for(int i=0;i<strlen(s);i++)
		{ 
		if(s[i]==toupper(c))
		     demkytu++;
		}
		printf("\n So ky tu %d",demkytu);
}






























