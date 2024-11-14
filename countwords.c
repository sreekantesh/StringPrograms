#include <stdio.h>
#include <string.h>

int main()
{
    char str[]="sree kantesh";
    int words=1,i=0;
    
    while(str[i] !='\0')
    {
        if(str[i] ==' ' || str[i] =='\n' || str[i] =='\t')
        {
            words++;
        }
        i++;
    }
    printf("%d",words);
}
