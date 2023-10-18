#include<stdio.h>
#include<conio.h>
int main()
   { char s[50], s2[50], key;
   while(true)
     {
       
    
       printf("************************************\n");
       printf("** THAO TAC TREN CHUOI **\n");
       printf("** 1. Nhap va chuan hoa chuoi **\n");
       printf("** 2. Dem so tu trong chuoi **\n");
       printf("** 3. Ghep chuoi **\n");
       printf("** 4. Kiem tra doi xung **\n");
       printf("** 5. In chuoi dao nguoc **\n");
       printf("** 0. Thoat **\n");
       printf("*************************************\n");
       fflush(stdin);
        printf("\n \t\t AN PHIM CHON: ");
       scanf("%d",&key);
       switch(key)
{
                case 1:
                    fflush(stdin);
                    printf("\nBam phim bat ky de tiep tuc!");
                    getch();
                    break;

                case 2:
                    printf("\nBam phim bat ky de tiep tuc!");
                    getch();
                    break;
                
				case 3:
                	printf("\nBam phim bat ky de tiep tuc!");
                    getch();
                    break;

               case 4:
                    printf("\nBam phim bat ky de tiep tuc!");
                    break;

               case 5:
                     printf("\nBam phim bat ky de tiep tuc!");
                     getch();
                     break;
 
               case 0:
                  
                     default:
                     printf("\nKhong co chuc nang nay!");
                     printf("\nBam phim bat ky de tiep tuc!");
                     getch();
                     break;
  }
}
}



//{
  // 	  for(int i=0;i<m;i++)
///   	      for(int j=0;j<n;j++)
 //  	       {
//			  printf("\n Nhap a[%d][%d]",i,j);
//			  scanf("%d",(a+i*n+j));
//		   }    
//  }

