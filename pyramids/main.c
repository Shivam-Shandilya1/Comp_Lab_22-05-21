#include <stdio.h>
#include <stdlib.h>
 int  n;
void pyramids();
int main()
{

    printf("Enter the number of Rows =\n");
    scanf("%d",&n);
    pyramids();
    return 0;
}

void pyramids ()
{
    int last= 1+(2*n-1)*2;

 int j=0;
 int spacenum=lastj;

 for (int i=1;i<=2*n;i++)
 {
     for(int p=0;p<spacenum;p++)
     {
         printf(" ");
     }
     for(int k=0;k<=j;k++)
     {
         printf("*");
     }
     for(int p=0;p<spacenum;p++)
     {
         printf("  ");
     }
     for(int k=0;k<=j;k++)
     {
         printf("*");
     }
     for(int p=0;p<spacenum;p++)
     {
         printf("  ");
     }
     for(int k=0;k<=j;k++)
     {
         printf("*");
     }
   j=j+2;
   spacenum=(last-j-1)/2;

   printf(" \n");

 }


}
