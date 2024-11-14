#include <stdio.h>
#include <string.h>
void Copying(char *str)
{
    char st[50];
    char *str1=st;
    
    while(*str !='\0')
    {
        *str1=*str;    
        str1++;
        str++;
    }
    printf("%s\n",st);
}
void Copying1(char str[])
{
char st[10];
int l=strlen(str);
int i=0;
while(l>0)
{
    st[i]=str[i];
    i++;
    l--;
}
 printf("%s\n",st);
}
int main()
{
    /***String Copy***/
//Using Pointer    
    char str[]="string";
    Copying(str);
//Using array
char str1[]="string";
    Copying1(str1);
//using lib function
    char st[10];
    strncpy(st,str1,strlen(str1));
    printf("%s\n",st);
}
