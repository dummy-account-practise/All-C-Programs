#include<stdio.h>
#include<conio.h>
#include<dos.h>>
main()
{
 int i,j,k=0,n;
 printf("enter numbers of rows");
 scanf("%d",&n);
 printf("**********************DIAMOND*****************\n");
 for(i=1;i<=2*n+1;i++)
 { i<=(n)?k++:k--;
  for(j=1;j<=2*n+1;j++)
  {if(j>=n+1-k&&j<=n-1+k)
   {
    printf("*");
   }
   else
   {printf(" ");
   }
  }
 printf("\n");
 }
 printf("*******************THANKS***************");
getch();
}
