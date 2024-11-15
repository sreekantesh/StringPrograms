/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int num[]={10,2,3,15,3,23};
   int l=sizeof(num)/sizeof(int);
   int f=-1,s=-1;
   for(int i=0;i<l;i++)
   {
       if(num[i] > f)
       {
        f=num[i];
       }
   }
   for(int i=0;i<l;i++)
   {
       if(num[i] > s && num[i] < f)
       {
           s=num[i];
       }
   }
   printf("%d %d",f,s);
   
    return 0;
}
