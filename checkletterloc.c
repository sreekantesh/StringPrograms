
#include <stdio.h>

int main()
{
   char str[]="sree kantesh";
   char a='k';
   int l=sizeof(str);
   int count=0;
   for(int i=0;i<l-1;i++)
   {
       count++;
       if(str[i] == a)
       {
           break;
       }
   }
   printf("%d",count);
   
    return 0;
}
