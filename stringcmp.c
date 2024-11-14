#include <stdio.h>
#include <string.h>
void StringCompare(char *s1,char *s2)
{
    int flag=0;
    while(*s1 !='\0' && *s2 != '\0')
    {
        if(*s1 != *s2)
        {
            flag=1;
            break;
        }
        s1++;
        s2++;
    }
if(flag==1)
 {
     printf("string are not equal\n");
 }
 else
 {
  printf("string are equal\n");   
 }
}
int main()
{
 char str1[]="sree";
 char str2[]="sree";
 //using library function
 if(strcmp(str1,str2))
 {
     printf("string are not equal\n");
 }
 else
 {
  printf("string are equal\n");   
 }
 
 char str3[]="sree";
 char str4[]="kantesh";
 int i,j,flag;
while(str3[i] !='\0' && str4[j]!='\0')
{
    if(str3[i] != str4[j])
    {
        flag=1;
        break;
    }
    i++;
    j++;
}
 if(flag==1)
 {
     printf("string are not equal\n");
 }
 else
 {
  printf("string are equal\n");   
 }
   char str5[]="sree";
 char str6[]="sree";
 StringCompare(str5,str6);
}
