#include <stdio.h>
int func(int n)
{
    if(n == 0)
    {
        return 1;
    }
    else
     return n*func((n-1));
}
int main()
{
    int arr[10]={20,3,6,10,1};
    
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<5;i++)
    {
       // printf("%d ",arr[i]);
    }
    
    /*reverse number*/
    int n=11;
    int rem;
    while(n>0)
    {
      int n1=n%10;
      rem=rem+n1*n1*n1;
      n=n/10;
    }
    
    //printf("%d",rem);
    
    int number=10;
    for(int i=2;i<number/2;i++)
    {
        if(number%i == 0)
        {
           // flag=1;
            break;
        }
    }
    
    int i=1;
    int nu=1;
    for(int i=1;i<=5;i++)
    {
        nu =nu*i;
    }
      printf("%d\n", func(i));
      //swap
      int a1=2;
      int a2=3;
      a1=a1^a2;
      a2=a1^a2;
      a1=a1^a2;
     printf("%d %d", a1,a2);
    return 0;
}
