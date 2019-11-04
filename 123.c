#include<stdio.h>
int bitcount(unsign x); 
int main (void)
{
    unsigned int m=1;
    while(m>0){
        m++;
    }
    printf("The max value in unsigned int :%u\n",m-1);
    printf("The size of unsigned int : %d\n :",bitcount(1));
    return0;
}
    int bitcount(unsigned x)
    {
        int b;
        for(b=0;x!=0;x<<1)
        b++;
        return b;
    }