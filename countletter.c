#include <stdio.h>
#include <string.h>

int main()
{
    char str[]="sreekantesh";
    int words=0,i=0;
    
    while(str[i] !='\0')
    {
        if(str[i] =='k')
        {
            words++;
            break;
        }
        else
            words++;
            
        i++;
    }
    printf("%d",words);
}
