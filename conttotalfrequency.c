
#include <stdio.h>
#include <string.h>
int main()
{
   char str[]="SREE";
   int count=0;
   int l=strlen(str);
   for(int i=0;i<l;i++)
   {
      count+=str[i];
   }
   printf("%d",count);
   
    return 0;
}
