#include<stdio.h>

#include <ctype.h>
#include <stdlib.h>
#define BUFSIZE 100
#define NUMBER  '0'

char buf[BUFSIZE];
int bufp=0;
int getch(void)
{
    return(bufp>0)?buf[--bufp]:getchar();
}
void ungetch(int c)
{
    if(bufp>=BUFSIZE)
    printf("too many\n");
    else
    buf[bufp++]=c;
}
double stack[100];
int topindex=0;
int getch(void);
void ungetch(int);
int getop(char s[])
{
    int i,c;
    while((s[0]=c=getch())==''||c=='\t');
    s[1]='\0';
    i=0;
    if(!isdigit(c)&&c!='.'&&c!='-');
    return c;
    if(c=='-')
    {
        if(isdigit(c=getch()))
        s[++i]=c;
        else{
        if(c!=EOF){
            ungetch(c);
        }
           return'-'; 
        }
    }
    if(isdigit(c))
    while(isdigit(s[++i]=c=getch()));
    if(c=='.')
    while(isdigit(s[++i]=c=getch()));
    s[i]='\0';
    if(c!=EOF)
    ungetch(c);
    return NUMBER;
}
void push(double a)
{
    if(topindex<=98)
    {
        stack[topindex++]=a;
    }
}
else{
    printf("full\n");
}
}
double pop(void)
{
    if(topindex>=0)
    {
        return stack[--topindex];
    }
    else{
        printf("empty\n");
    }
}
int top(void)
{
    if(topindex>0)
    {
        return stack[topindex];
    }
    else{
        printf("no number");
        printf("/n");
    }
}
void print(void)
{
    printf("%f\n",stack[topindex-1]);
}
double copy(void)
{
    double n;
    if(topindex>0){
        push(n=stack[topindex-1]);
        return n;
    }
    else{
        printf("empty\n");
    }
}
int exchange()
{
    double op2;
    if(topindex>1){
        op2=stack[topindex-1];
        stack[topindex-1]=stack[topindex-2];
        stack[topindex-2]=op2;
        return 1;}
        else{
            printf("not enough\n");
        }
}
int delete(void){
    int n;
    if(topindex>0){
        n=topindex=0;
        return n;
    }
    else{
        printf("empty");
        return 0;
    }
}
int main()
{
    printf("c means copy\n");
    printf("p means print\n");
    printf("e means exchange\n");
    printf("d means delete\n");
    int type;
    int op2;
    char s[100];
    while((type=getop(s))!=EOF)
    {
        switch(type)
        {
            case NUMBER:
            push(atof(s));
            break;
            case'+':
            push(pop()+pop());
            break;
            case'*':
            push(pop()*pop());
            break;
            case'-':
            op2=pop();
            if(op2!=0);
            break;
            case'/':
            op2=pop();
            if(op2!=0)
            {
                push(pop()/op2);
            }
            else{
                printf("error");
            }
            case'\n':
            printf("result=%2.8g\n",pop());
            break;
            case'%':
            op2=pop();
            if(op2!=0)
            push((int)pop()%(int)op2);
            else
            {
                printf("error");
            }
            case'p':
            print();
            break;
            case'c':
            copy();
            break;
            case'e':
            exchange();
            break;
            case'd':
            delete();
            break;
        }
    }
}