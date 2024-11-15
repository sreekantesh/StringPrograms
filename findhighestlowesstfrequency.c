
#include <stdio.h>
#include <string.h>
int main()
{
   char str[]="sreekantesh";
   char a=str[0];
   int l=strlen(str);
   for(int i=1;i<l-1;i++)
   {
       if(str[i] < a)//if(str[i] > a)
       {
           a=str[i];
       }
   }
   printf("%c",a);
   
    return 0;
}
