#include <stdio.h>
#include <string.h>
void Reverse1(char str[])
{
    int j=strlen(str)-1;
    int i=0;
    while(i<j)
    {
        char temp=str[j];
        str[j]=str[i];
        str[i]=temp;
        i++;
        j--;
    }
    printf("%s\n",str);
}
void Reverse2(char *str)
{
    char *start=str;
    char *end=str+strlen(str)-1;
    
    while(start<end)
    {
        *start=*start ^ *end;
        *end=*start ^ *end;
        *start=*start ^ *end;
        start++;
        end--;
    }
}
void Reverse3(char *str)
{
    if(*str)
    {
        Reverse3(str+1);
        printf("%c",*str);
    }
}
void Reverse4(char str[])
{
    int l=strlen(str)-1;
    int i=0;
        printf("\n");
    for(int i=l;i>=0;i--)
    {
        printf("%c",str[i]);
    }

}
void Reverse5(char str[])
{
    int l=strlen(str)-1;
    int i=0;
    printf("\n");
    while(l>=0)
    {
        printf("%c",str[l]);
        l--;
        i++;
    }
}
void Reverse6(char str[])
{
    int l=strlen(str)-1;
    int i=0;
    printf("\n");
    do
    {
        printf("%c",str[l]);
        l--;
        i++;
    }while(l>=0);
}
int main()
{
    /***String Reverse***/
//Using Function
char str1[]="string";
Reverse1(str1);
//Using pointer
char str2[]="string";
Reverse2(str2);
printf("%s\n",str2);
//Using Recursion
char str3[]="string";
Reverse3(str3);
//Using For loop
char str4[]="string";
Reverse4(str4);
//Using while loop
char str5[]="string";
Reverse5(str5);
//Using while loop
char str6[]="string";
Reverse6(str6);

    return 0;
}
