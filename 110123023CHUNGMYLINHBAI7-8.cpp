#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char   s1[50],s2[50];
	printf("Nhap chuoi thu nhat (<=50 ky tu):");
	fgets(s1, sizeof(s1),stdin);
	s1[strcspn(s1, "\n")]= '\0';
	
	printf("Nhap chuoi thu hai (<=50 ky tu):");
	fgets(s2, sizeof(s2),stdin);
	s2[strcspn(s2, "\n")]= '\0';
	
	printf("\nChuoi thu nhat da nhap la :%s ",s1);
	printf("\nChuoi thu hai da nhap la :%s",s2);
	
	return 0;
}	
	
	
	
	
	
	
	
	
	
