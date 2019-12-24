#include<stdio.h>
#include<math.h>
int power(int base, int n){
    int i,p;
    p=1;
    for (i=1;i<=n;++i)
    p = p*base;
    return p;
}
int main()
{
    char x[18] = {0};
    int i = 0;
    char y;
    int sum = 0;
    int gen =-1;
    unsigned int b = 1;
    printf("please input a  number with 0X/0x\n");
    while((y = getchar()) != '\n'){
        x[i]=y;
        i++;
        gen++;
    }
        if(x[0]!='0'){
        printf("input error\n");
        return 0;}
        if(x[1]!='x'&&x[1]!='X'){
            printf("input error\n");
            return 0;
        }
        i--;
        while(i > 1)
    {
            if(x[i]<='9'&&x[i]>='0')
                sum+=(x[i]-'0')*power(16,gen-i);
            else
            if(x[i]>='A'&&x[i]<='F')
                sum+=(x[i]-'A'+10)*power(16,gen-i);
            else
            if(x[i]>='a'&&x[i]<='f')
                sum+=(x[i]+'A'-'a'-'A'+10)*power(16,gen-i);
            else{
                printf("input error\n");
                return 0;
                }
            i--;
    }
    while(b!=0){
        b=b<<1;
    }
    if(sum>b-1){
    printf("the max is %u,error:your input number  is too big\n",b-1);
    }
    else printf("%d\n",sum);
    return 0 ;
}