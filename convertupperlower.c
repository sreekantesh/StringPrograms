#include <stdio.h>
void Uppercase(char *s)
{
    while(*s)
    {
        if(*s >= 'a' && *s <= 'z')
        {
            *s=*s-32;
        }
        else
        {
           *s=*s+32;   
        }
        s++;
    }
    printf("%s",s);
}

int main()
{
    char str[10]="SReE";
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i] >='a' && str[i]<= 'z')
        {
            str[i]=str[i]-32;
        }
        else if(str[i] >='A' && str[i]<= 'Z')
        {
             str[i]=str[i]+32;
        }
        i++;
    }
    
    char str1[10]="SReE";
   Uppercase(str1);
    printf("%s",str1);
    
}
