#include <stdio.h>
#include <stdlib.h>

int set1[]={0,0,0,0,0,0,0,0,0},int set2[]={0,0,0,0,0,0,0,0,0} ;
void input()
void main()
{
int choice,opt;

  do
   {
  printf("\n____menu____\n");
  printf("1.Input\n2.Union\n3.Intersection\n4.Difference\n");
  printf("enter choice\n");
  scanf("%d",&ch);

  switch(ch)
   {
     case 1:input();
        break;
   

   }
   printf("\nDo you wish to continue ?(y/n) \n");
  scanf("%d",&opt);

   }while(opt=="y");

 }
 
 void input()
{ int n,x,i;
  printf("enter size of the 1st set\n");
  scanf("%d",&n);
   printf("enter elements\n");
  for(i=0;i<n;i++)
  { scanf("%d",&x);
      a[x-1]=1;
  }
  printf("enter size of the 2nd set\n");
  scanf("%d",&n);
  printf("enter elements\n");
  for(i=0;i<n;i++)
  { scanf("%d",&x);
      b[x-1]=1;
  }
  printf("\n1st set\n");
  for(i=0;i<9;i++)
   { printf("%d",a[i]);
   }
   printf("\n2nd set\n");
  for(i=0;i<9;i++)
   { printf("%d",b[i]);
   }
}




