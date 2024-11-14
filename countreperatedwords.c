#include <stdio.h>
#include <string.h>
//123243

int main()
{
    int num[]={1,2,3,2,4,3};
    
    for(int i=0;i<6;i++)
    {
        int count=0;
        for(int j=0;j<6;j++)
        {
            if(num[i] == num[j])
            {
               count++; 
            }
        }
        printf("number %d is repeated %d times\n",num[i],count);
    }
}
