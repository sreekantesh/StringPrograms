

#include <stdio.h>

int main()
{
   int num[]={10,2,3,15,5,23,1};
   int l=sizeof(num)/sizeof(int);
   int f=num[0],s=num[0];
   for(int i=1;i<l;i++)
   {
       if(num[i] < f)
       {
        f=num[i];
       }
   }
   for(int i=0;i<l;i++)
   {
       if(num[i] < s && num[i] > f)
       {
           s=num[i];
       }
   }
   printf("%d %d",f,s);
   
    return 0;
}
