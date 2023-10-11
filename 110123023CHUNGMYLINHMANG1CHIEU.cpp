#include<stdio.h>
#include<conio.h>
   int a[50],n;
   void GTLN(int x);
   void TINHTICH(int y);
    int main()
       
	   {
        	printf("nhap mang co bao nhieu phan tu");
        	scanf("%d",&n);
        	for(int i=0;i<n;i++)
        	   
        	    {
        	    	printf("nhap phan tu thu %d",i);
        	    	scanf("%d",&a[i]);
        	    
				}
		
			GTLN(n);
			TINHTICH(n);
	   }	

void GTLN(int x)
      {
	     int max=0,tam=0;
		 for(int i=0;i<x;i++)
		   
		     {
			    if(a[i]>max)
				tam=a[i];a[i]=max;max=tam;
			 }
			 printf("gia tri lon nhat trong mang la %d",max);
	  }
void TINHTICH(int y)	   		 		
	{
	   int 	tich=1;
	   for(int i=0;i<y;i++)
	     { 
		  
		  tich=tich*a[i];
		  
		 }	
		 print("\n tich cac phan tu trong mang la %d",tich);
		 
	}	 				
