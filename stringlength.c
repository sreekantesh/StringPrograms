#include <stdio.h>
#include <string.h>
int rcount=0;
int Length(char *s)
{
    
    if(*s)
    {
        rcount++;
        Length(s+1);
    }
    return rcount;
}
int main()
{
/*** Find String Length****/
    char str[]="String";
//Using Library Function
  int length =strlen(str);
    printf("Using Library Function String length: %d\n", length);
//Using while loop
    int i=0;
    while(str[i] != '\0')
    {
        i++;
    }
    printf("Using while loop String length: %d\n", i);
//using for loop
    int count=0;
    for(int i=0;str[i] !='\0';i++)
    {
        count++;
    }
    printf("using loop String length: %d\n", count);
//using recursion function    
    printf("using recursion String length: %d\n", Length(str));
//using Pointer   
    int c;
    char *str1="String";
    while(*str1 != '\0')
    {
        c++;
        str1++;
    }
    printf("using pointer String length: %d\n", c);
    
    return 0;
}
