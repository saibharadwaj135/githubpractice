/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int a[3][3],i,j,z=0,o=0,m,n;
   scanf("%d%d",&m,&n);
   for(i=0;i<m;i++)
   {
       for(j=0;j<n;j++)
       {
           scanf("%d",&a[i][j]);
       }
   }
   for(i=0;i<m;i++)
   {
       for(j=0;j<n;j++)
       {
           if(a[i][j]==0)
           {
               z++;
           }
           if(a[i][j]==1)
           {
               o++;
           }
       }
   }
   if(z>o)
   {
       printf("sparse");
       
   }
   else
   {
       printf("dense");
   }

    return 0;
}
