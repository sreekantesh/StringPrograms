#include <stdio.h>
#include <stdint.h>

int main()
{
    //Bit operators
//set 
uint8_t data=0x00;
data |=1<<2;
printf("%d\n",data);
//reset
uint8_t data1=0xFF;
data1 &=~(1<<7);
printf("%d\n",data1);
//toggle
uint8_t data2=0xFF;
data2 ^=(1<<2);
printf("%d\n",data2);

uint8_t data3=0x32;
data3 =(data3 & 0x0F)<<4 | (data3 & 0xF0)>>4;
printf("%x\n",data3);

uint16_t data5=0x3245;
data5 =(data5 & 0x000F)<<12 | (data5 & 0xF000)>>12 | (data5 & 0x00F0)<<4 | (data5 & 0x0F00)>>4;
printf("%x\n",data5);

uint32_t data4=0x32454567;
data4 =(data4 & 0x000000FF)<<24 | (data4 & 0xFF000000)>>24 | (data4 & 0x0000FF00)<<8 | (data4 & 0x00FF0000)>>8;
printf("%x\n",data4);

uint8_t num=50;
int l=2;
int r=5;

int mask=(1<<r)-1 ^ ((1<<l-1)-1);
printf("%d\n",num^mask);

uint8_t num1=4;
if(num1 & (1<<1))
{
    printf("set\n");
}
else
{
    printf("not set\n");
}
int n=-10;
int f=(n>0)-(n<0);
if(f==1)
{
   printf("positive\n"); 
}
else
{
    printf("negative\n"); 
}

int n1=-10;
int n2=20;
int f1=(n1^n2)<0;
if(f1==0)
{
   printf("positive\n"); 
}
else
{
    printf("negative\n"); 
}
//Write a program to check an integer is a power of 2?
int a=2;
int f3=(a!=0) && !(a & (a-1));
if(f3 == 1)
    {
        printf("Number is a power of 2 \n");
    }
    else
    {
        printf("Enter number is not power of 2 \n");
    }
uint8_t re;
uint8_t tmp;
for(int i=0;i<8;i++)
{
    if(re & (1<<i))
    {
      tmp |=1<<((8-1)-i);  
    }
}
printf("%d\n",tmp);

int m=1;
int CountSetBits;
    while (m)
    {
        CountSetBits += m & 1;
        m =m>>1;
    }
    printf("Number of 1 = %d", CountSetBits);
    
    return 0;
}
