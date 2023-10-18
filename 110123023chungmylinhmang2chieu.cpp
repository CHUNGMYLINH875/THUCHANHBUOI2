#include<stdio.h>
#include<stdlib.h>
void nhapmang(int a[50][50],int n,int m);

int main()

 {   
   int a[50][50],m,n;
   
   printf("\n Nhap so dong :");
   
   scanf("%d",&n);
   
   printf("\n nhap so cot :");
   
   scanf("%d",&m);
   
   nhap2chieu(a,m,n);
  
   xuat2chieu(a,m,n);
  
   sapxep2chieu(a,m,n);
 
   getch();;
 }  
   
    void nhap2chieu(int a[50][50],int m,int n)
    { 
	    int i,j;
         
		 for(i=0;i<m;i++) 
         
		 for(j=0;j<n;j++)
         
           {
               printf("a[%d][%d]",i,j);
			   
			   scanf("%d",&a[i][j]);
			}              	  
    }
    
    
	void xuat2chieu(int a[50][50],intm,int n)
	 { int
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
