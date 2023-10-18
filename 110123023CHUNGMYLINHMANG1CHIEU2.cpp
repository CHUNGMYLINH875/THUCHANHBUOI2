#include<stdio.h>
void nhapmang(  int a[10],int n);
void xuatmang(  int a[10],int n);
void lonnhat(   int a[10],int n);
void nhonhat(   int a[10],int n);
void tinhtich(  int a[10],int n);

int main()
 { 
    int a[10],n;
    printf("Nhap mang co so dong = ");
    scanf("%d",&n);
    
   
    nhapmang(a,n);
   
    xuatmang(a,n);
    
	lonnhat(a,n);
    
    nhonhat(a,n);
    
    
 }    




void nhapmang(int a[10],int n)
 { 
   int i;
   for( i=0;i<n;i++)
   {
   	  printf("\n  nhap phan tu thu a[%d]=",i);
   	  scanf("%d", &a[i]);
   }  
 }



void xuatmang(  int a[10],int n)
 { 
    int i;
    printf("\n mang vua nhap la :  ");
    for(  i=0 ; i<n ;i++)
    printf("  %d    ",a[i]);
 } 
  
 
 
 
void lonnhat(int a[10],int n)
 {
	 
	 int i,max=0;
	 for(i=0;i<n;i++)
	{
	 
	 	 if(a[i]>max)
	 	 max=a[i];
	 	 
    }
 
    printf("\n so lon nhat trong mang la %d",max);
    
 }
 
 
 void nhonhat(  int a[10],int n)
 {
 	    int i, min = a[0]; 
		for( i=0 ; i<n ; i++ )  
        {
        	if( a[i]  <  min ) 
        	min  = a[i];
        }
         printf("\n so nho nhat trong mang la %d",min);
  }       
 
 

 void tinhtich(int a[10],int n)
  {
  	 
  	 int 	tich=1;
	   for(int i=0;i<n;i++)
	     { 
		  
		  tich=tich*a[i];
		  
		 }	
		 printf("\n tich cac phan tu trong mang la %d",tich);
 
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
   
