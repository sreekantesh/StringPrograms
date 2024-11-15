

#include <stdio.h>

int main()
{
   char str[]="sree kantkeshk";
   char a='k';
   int l=sizeof(str);
   int count=0;
   int n;
   for(int i=0;i<l-1;i++)
   {
       count++;
       if(str[i] == a)
       {
           n=count;
       }
   }
   printf("%d",n);
   
    return 0;
}
