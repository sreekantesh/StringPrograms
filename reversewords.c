#include <stdio.h>
#include <string.h>

int main()
{
    char name[100]="sree kantesh";
    int l=strlen(name);
    for(int i=l-1;i>=0;i--)
    {
        
        if(name[i] == ' ')
        {
            for(int j=i+1;j<l;j++)
            {
                printf("%c",name[j]);
            }
            printf(" ");
            l=i;
        }
    }
    for(int k=0;k<l;k++)
    {
        printf("%c",name[k]);
    }
    return 0;
}
