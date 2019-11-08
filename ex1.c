# include<stdio.h>
   int max (unsigned n)
 {
    int a;
    for(a=0;n !=0;n<<=1)
    {
        n++;
    }
    return a;
}
int main()
{
    unsigned int y;
    while (y>0)
    {
        y++;
    }
    printf("Max number:%u\n",y-1);
    printf("Max Bit:%d\n:",main(1));
    return 0;
}