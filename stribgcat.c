#include <stdio.h>
#include <string.h>
void Concatation(char s1[],char s2[])
{
    int l1=strlen(s1);
    int l2=0;
    while(s2[l2] !='\0')
    {
        s1[l1]=s2[l2];
        l1++;
        l2++;
    }
    s1[l1]='\0';
    printf("%s\n",s1);
}
void Concatation1(char *s1,char *s2)
{
    char *s=s1+strlen(s1);
    char *s0=s2;
    while(*s2 !='\0')
    {
        *s=*s2;
        s++;
        s2++;
    }
    *s='\0';
    printf("%s\n",s1);
}
int main()
{
  //Using function
  char str1[]="sree";
  char str2[]="kantesh";
  Concatation(str1,str2);
  char str3[]="sree";
  char str4[]="kantesh";
  Concatation1(str3,str4);
  char str5[]="sree";
  char str6[]="kantesh";
  strcat(str5,str6);
  printf("%s",str5);

}
