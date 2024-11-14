#include <stdio.h>
#include <string.h>

int main()
{
    char str[]="strrrr@123";
    int i=0;
    int alphabets,numbers,other;
    while(str[i] !='\0')
    {
        if((str[i] >='a' && str[i] <= 'z') || (str[i] >='A' && str[i] <= 'Z'))
        {
            alphabets++;
        }
        else if(str[i] >='0' && str[i] <='9')
        {
            numbers++;
        }
        else
        {
            other++;
        }
        i++;
    }
    printf("%d %d %d",alphabets,numbers,other);
}
